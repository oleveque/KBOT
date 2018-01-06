/************************************************************************
 * File : KBOT.h                                         			    *
 *  Configuration file version 2.0 	  			                        *
 *  Read more : http://github.com/oleveque/KBOT 						*
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>      	    *
 ************************************************************************/

#ifndef __KBOT_CONFIG_H
#define __KBOT_CONFIG_H

/* ------------------------- 
  Usefull libraries
------------------------- */

#include <Servo.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h> //You need to install this library from http://github.com/marcoschwartz/LiquidCrystal_I2C

/* ------------------------- 
  Config Arduino Méga 2560
------------------------- */

//Motors
#define MOT_LEFT1 	12
#define MOT_LEFT2 	11
#define ENCA_LEFT 	3
#define ENCB_LEFT 	2

#define MOT_RIGHT3 	10
#define MOT_RIGHT4 	9
#define ENCA_RIGHT 	18
#define ENCB_RIGHT 	19

//Serial
#define USB 		Serial
#define BLUETOOTH 	Serial2

//User Interface
#define BUILTIN_LED 13
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
#define BTN_UP 		A9
#define BTN_DOWN 	A10
#define BTN_CENTER 	A11
#define BTN_LEFT 	A12
#define BTN_RIGHT 	A13
#define BTN_START 	A1

//Battery Monitoring
#define BATT1 		A4
#define BATT2 		A5
#define BATT3 		A6

//Other
#define I2C	 		Wire
#define BUZZER 		8
#define SHARP 		A7
#define SERVO		5

#endif //__KBOT_CONFIG_H
