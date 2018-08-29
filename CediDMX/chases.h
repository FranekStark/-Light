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

#endif // !CHASES_H
