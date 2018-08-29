/*
 Name:		CediDMX.ino
 Created:	28.08.2018 15:05:58
 Author:	franek
*/

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <espDMX.h>
#include "chases.h"
#include "Site.h"

/*Wifi-Settings*/
const char *wifiSsid = "#Light";
const char *wifiPassword = "Denon";
const IPAddress localIP(10, 0, 0, 0);
const IPAddress subnetMASK(255, 0, 0, 0);
const IPAddress gatewayIP(10, 0, 0, 0);

/*Web-Server*/
ESP8266WebServer webServer(80);

/*DMX*/
chase **chases; //Array chase(s)
size_t chaseCount = 0; //Number of Chases in *chases

size_t stepCount = 0; //Counter to interpolate accurate

uint8_t *nextChans;

void setup() {
	/*Setup Wifi-Access Point*/
	delay(1000);
	Serial.begin(115200);
	Serial.println("Setup Access Point --->");
	WiFi.softAP(wifiSsid);
	WiFi.softAPConfig(localIP, gatewayIP, subnetMASK);
	Serial.print("Lokale IP-Adresse: ");
	Serial.println(WiFi.softAPIP());
	Serial.println("<---");

	/*Setup Web-Server*/
	webServer.on("/", handleWebClient);
	webServer.begin();

	/*Setup DMX*/
	//dmxA.begin();
	nextChans = (uint8_t*)calloc(DMXSTEPSIZE, sizeof(uint8_t));
		
	
	
	
	//Steps to Chases order------------------>
	steps0[0] = steps0_1;
	move0.step = (uint8_t **)steps0;

	steps1[0] = steps1_1;
	steps1[1] = steps1_2;
	steps1[2] = steps1_3;
	steps1[3] = steps1_4;
	move1.step = (uint8_t**)steps1;

	stepsc0[0] = stepsc0_1;
	color0.step = (uint8_t **)stepsc0;

	stepsc1[0] = stepsc1_1;
	stepsc1[1] = stepsc1_2;
	stepsc1[2] = stepsc1_3;
	color1.step = (uint8_t**)stepsc1;

	//<---------------------------------------

	chases = (chase**)calloc(10, sizeof(chase*));
	chases[0] = &move1;
	chases[1] = &color1;
	chaseCount = 2;
}

void loop() {
	delay(500);
	/*Tasks*/
	webServer.handleClient();
	handleDMX();
}




/*Called, when a Client sends a request to Webserver on Root-Level*/
void handleWebClient() {
	String arg = webServer.arg(0);
	if (arg == "C0")
	{
		chases[1] = &color0;
	}
	else if (arg == "C1")
	{
		chases[1] = &color1;
	}
	else if (arg == "C2")
	{

	}

	String s = MAIN_page;
	webServer.send(200, "text/html", s);
}

void handleDMX() {
	stepCount++; //One Step later
	memset(nextChans,0, sizeof(uint8_t) * DMXSTEPSIZE);
	Serial.printf("StepCount: %d\n\r", stepCount);
	//For each activated Chase
	for (size_t i = 0; i < chaseCount; i++)
	{
		chase * iChase = chases[i];
		if (iChase->fade)
		{
			int intNr = (stepCount / iChase->time) % iChase->count;
			float floatNr = (float)(stepCount % iChase->time) / iChase->time;

			uint8_t interPole[DMXSTEPSIZE];
			for (size_t i = 0; i < DMXSTEPSIZE; i++)
			{
				interPole[i] = (1 - floatNr) * (iChase->step)[intNr][i] + floatNr * iChase->step[(intNr + 1)%iChase->count][i];
			}

			stepPack(interPole, nextChans);
		}
		else
		{
			stepPack(((*iChase).step[(stepCount / iChase->time) % iChase->count]), nextChans);
		}
		
	}

	//Debug Only
	for (size_t i = 0; i < DMXSTEPSIZE; i++)
	{
		Serial.printf("%d",nextChans[i]);
		Serial.write("|");
	}
	Serial.println("");
	//dmxA.setChans(nextChans, DMXSTEPSIZE);
}

/* Put the Values from destArray to Src Array, only if destArrays Value is bigger.*/
void stepPack(uint8_t * srcStep, uint8_t * destStep)
{
	for (size_t i = 0; i < DMXSTEPSIZE; i++)
	{
		if (destStep[i] < srcStep[i])
		{
			destStep[i] = srcStep[i];
		}
	}
}


