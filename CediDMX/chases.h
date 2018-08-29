#ifndef CHASES_H
#define CHASES_H

#define DMXSTEPSIZE 11


typedef struct chase {
	size_t count; //number of steps
	size_t time; //time between two step
	bool fade; //fade between two steps
	uint8_t **step; //array of count step
}chase;


//-------------------Chases
//Move0
uint8_t steps0_1[DMXSTEPSIZE] = { 0,0,0,0,0,0,0,0,0,0,0 };
uint8_t * steps0[1] = { NULL};
chase move0 = {
	.count = 1,
	.time = 1000,
	.fade = false,
	.step = NULL
};



//Move1
uint8_t steps1_1[DMXSTEPSIZE] = { 0,0,0,0,0,0,0,0,0,0,0 };
uint8_t steps1_2[DMXSTEPSIZE] = { 127,127,0,0,0,0,0,0,0,0,0 };
uint8_t steps1_3[DMXSTEPSIZE] = { 255,255,0,0,0,0,0,0,0,0,0 };
uint8_t steps1_4[DMXSTEPSIZE]= { 127,127,0,0,0,0,0,0,0,0,0 } ;

uint8_t * steps1[4] = { NULL,NULL,NULL,NULL};

chase move1 = {
	.count = 4,
	.time = 20,
	.fade = true,
	.step = NULL
};

//Move2
uint8_t steps2_1[DMXSTEPSIZE] = { 42,0,0,0,0,0,0,0,0,0,0 };
uint8_t steps2_2[DMXSTEPSIZE] = { 213,255,0,0,0,0,0,0,0,0,0 };


uint8_t * steps1[4] = { NULL,NULL};

chase move1 = {
	.count = 2,
	.time = 100,
	.fade = true,
	.step = NULL
};






//Color0
uint8_t stepsc0_1[DMXSTEPSIZE] = { 0,0,0,0,0,0,0,0,0,0,0 };
uint8_t * stepsc0[1] = { NULL };
chase color0 = {
	.count = 1,
	.time = 1000,
	.fade = false,
	.step = NULL
};

//Color1
uint8_t stepsc1_1[DMXSTEPSIZE] = { 0,0,0,255,0,0,0,0,0,0,0 };
uint8_t stepsc1_2[DMXSTEPSIZE] = { 0,0,0,0,255,0,0,0,0,0,0 };
uint8_t stepsc1_3[DMXSTEPSIZE] = { 0,0,0,0,0,255,0,0,0,0,0 };
uint8_t * stepsc1[3] = { NULL, NULL, NULL };
chase color1 = {
	.count = 3,
	.time = 10,
	.fade = false,
	.step = NULL
};

//Color2
uint8_t stepsc2_1[DMXSTEPSIZE] = { 0,0,0,255,0,0,0,0,0,0,0 };
uint8_t stepsc2_2[DMXSTEPSIZE] = { 0,0,0,0,255,0,0,0,0,0,0 };
uint8_t stepsc2_3[DMXSTEPSIZE] = { 0,0,0,0,0,255,0,0,0,0,0 };
uint8_t * stepsc2[3] = { NULL, NULL, NULL };
chase color1 = {
	.count = 3,
	.time = 10,
	.fade = true,
	.step = NULL
};

//Color3
uint8_t stepsc3_1[DMXSTEPSIZE] = { 0,0,0,255,0,0,0,0,0,0,0 };
uint8_t stepsc3_3[DMXSTEPSIZE] = { 0,0,0,125,0,0,0,0,0,0,0 };
uint8_t stepsc3_4[DMXSTEPSIZE] = { 0,0,0,0,0,125,125,0,0,0,0 };
uint8_t stepsc3_5[DMXSTEPSIZE] = { 0,0,0,0,255,0,0,0,0,0,0 };
uint8_t stepsc3_6[DMXSTEPSIZE] = { 0,0,0,0,125,125,0,0,0,0,0 };
uint8_t stepsc3_7[DMXSTEPSIZE] = { 0,0,0,0,0,125,0,0,0,0,0 };
uint8_t stepsc3_8[DMXSTEPSIZE] = { 0,0,0,0,125,0,0,0,0,0,0 };
uint8_t stepsc3_9[DMXSTEPSIZE] = { 0,0,0,0,125,0,125,0,0,0,0 };
uint8_t stepsc3_10[DMXSTEPSIZE] = { 0,0,0,125,125,125,0,0,0,0,0 };
uint8_t stepsc3_11[DMXSTEPSIZE] = { 0,0,0,0,125,125,0,0,0,0,0 };
uint8_t stepsc3_12[DMXSTEPSIZE] = { 0,0,0,0,0,255,0,0,0,0,0 };
uint8_t stepsc3_13[DMXSTEPSIZE] = { 0,0,0,125,125,0,0,0,0,0,0 };
uint8_t * stepsc14[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
chase color1 = {
	.count = 13,
	.time = 10,
	.fade = false,
	.step = NULL
};

//Color4
uint8_t stepsc4_1[DMXSTEPSIZE] = { 0,0,0,255,0,0,0,0,0,0,0 };
uint8_t stepsc4_3[DMXSTEPSIZE] = { 0,0,0,125,0,0,0,0,0,0,0 };
uint8_t stepsc4_4[DMXSTEPSIZE] = { 0,0,0,0,0,125,125,0,0,0,0 };
uint8_t stepsc4_5[DMXSTEPSIZE] = { 0,0,0,0,255,0,0,0,0,0,0 };
uint8_t stepsc4_6[DMXSTEPSIZE] = { 0,0,0,0,125,125,0,0,0,0,0 };
uint8_t stepsc4_7[DMXSTEPSIZE] = { 0,0,0,0,0,125,0,0,0,0,0 };
uint8_t stepsc4_8[DMXSTEPSIZE] = { 0,0,0,0,125,0,0,0,0,0,0 };
uint8_t stepsc4_9[DMXSTEPSIZE] = { 0,0,0,0,125,0,125,0,0,0,0 };
uint8_t stepsc4_10[DMXSTEPSIZE] = { 0,0,0,125,125,125,0,0,0,0,0 };
uint8_t stepsc4_11[DMXSTEPSIZE] = { 0,0,0,0,125,125,0,0,0,0,0 };
uint8_t stepsc4_12[DMXSTEPSIZE] = { 0,0,0,0,0,255,0,0,0,0,0 };
uint8_t stepsc4_13[DMXSTEPSIZE] = { 0,0,0,125,125,0,0,0,0,0,0 };
uint8_t * stepsc14[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
chase color1 = {
	.count = 13,
	.time = 10,
	.fade = true,
	.step = NULL
};

//Color R
uint8_t stepsColorR_1[DMXSTEPSIZE] = { 0,0,0,255,0,0,0,0,0,0,0 };
uint8_t * stepsColorR[1] = { NULL };
chase colorR = {
	.count = 1,
	.time = 1000,
	.fade = false,
	.step = NULL
};

//Color G
uint8_t stepsColorG_1[DMXSTEPSIZE] = { 0,0,0,0,255,0,0,0,0,0,0 };
uint8_t * stepsColorG[1] = { NULL };
chase colorG = {
	.count = 1,
	.time = 1000,
	.fade = false,
	.step = NULL
};

//Color B
uint8_t stepsColorB_1[DMXSTEPSIZE] = { 0,0,0,0,0,255,0,0,0,0,0 };
uint8_t * stepsColorB[1] = { NULL };
chase colorR = {
	.count = 1,
	.time = 1000,
	.fade = false,
	.step = NULL
};

//Lamp Off
uint8_t stepsLampOff_1[DMXSTEPSIZE] = { 0,0,0,0,0,0,0,0,0,0,0 };
uint8_t * stepsLampOff[1] = { NULL };
chase LampOff = {
	.count = 1,
	.time = 1000,
	.fade = false,
	.step = NULL
};

//LampStrobe Slow
uint8_t stepsLampStrobeSlow_1[DMXSTEPSIZE] = { 0,0,0,0,0,0,0,31,255,0,0 };
uint8_t * stepsLampStrobeSlow[1] = { NULL };
chase LampStrobeSlow = {
	.count = 1,
	.time = 1000,
	.fade = false,
	.step = NULL
};

//LampStrobe Mid
uint8_t stepsLampStrobeMid_1[DMXSTEPSIZE] = { 0,0,0,0,0,0,0,115,255,0,0 };
uint8_t * stepsLampStrobeMid[1] = { NULL };
chase LampStrobeMid = {
	.count = 1,
	.time = 1000,
	.fade = false,
	.step = NULL
};

//LampStrobe Fast
uint8_t stepsLampStrobeFast_1[DMXSTEPSIZE] = { 0,0,0,0,0,0,0,200,255,0,0 };
uint8_t * stepsLampStrobeFast[1] = { NULL };
chase LampStrobeFast = {
	.count = 1,
	.time = 1000,
	.fade = false,
	.step = NULL
};

//Lamp On
uint8_t stepsLampOn_1[DMXSTEPSIZE] = { 0,0,0,0,0,0,0,251,255,0,0 };
uint8_t * stepsLampOn[1] = { NULL };
chase LampOn = {
	.count = 1,
	.time = 1000,
	.fade = false,
	.step = NULL
};
//C

#endif // !CHASES_H
