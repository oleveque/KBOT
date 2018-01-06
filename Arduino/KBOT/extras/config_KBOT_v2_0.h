/************************************************************************
 * File : config_KBOT_v2_0.h                                         	*
 *  >> BRAINZY Library <<                                               *
 *  Project repo  : http://github.com/oleveque/BRAINZY                  *
 *  Documentation : http://docs.mr-robotics.com/                        *
 *																		*
 *  This file define the KBOT v2.0 pin names 							*
 *																		*
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>     	    *
 ************************************************************************/

#ifndef __BRAINZY_CONFIG_H
#define __BRAINZY_CONFIG_H

/* ------------------- 
  For BRAINZY Lib
------------------- */

//Motor LEFT
#define MOT1_1 		12
#define MOT1_2 		11
#define ENC1_A 		3
#define ENC1_B 		2

//Motor RIGHT
#define MOT2_1 		10
#define MOT2_2 		9
#define ENC2_A 		18
#define ENC2_B 		19

//Motor FRONT
#define MOT3_1 		255	 //255 if not exists
#define MOT3_2 		255  //255 if not exists
#define ENC3_A 		255  //255 if not exists
#define ENC3_B 		255  //255 if not exists

//Serial
#define USB 		Serial
#define Bluetooth 	Serial2

//I2C
#define I2C_SDA 	20
#define I2C_SCL 	21
#define I2C 		Wire

//Power Monitoring
#define BATT1 		A4
#define BATT2 		A5
#define BATT3 		A6

//Other
#define BUZZER 		8
#define BUILTIN_LED 13

/* ------------------- 
  Other
------------------- */

//LED
#define LED0 		47
#define LED1 		45
#define LED2 		43
#define LED3 		41
#define LED4 		39
#define LED5 		38
#define LED6 		40
#define LED7 		42
#define LED8 		44
#define LED9 		46

//Buttons
#define BTN_UP 		A9
#define BTN_DOWN 	A10
#define BTN_CENTER 	A11
#define BTN_LEFT 	A12
#define BTN_RIGHT 	A13
#define BTN_START 	A1

//Other
#define SHARP 		A7
#define SERVO		5


#endif //__BRAINZY_CONFIG_H