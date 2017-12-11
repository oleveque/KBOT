/************************************************************************
 * File : configRobot.h                                         		*
 *  >> BRAINZY Library <<                                               *
 *  Project repo  : http://github.com/oleveque/BRAINZY                  *
 *  Documentation : http://docs.mr-robotics.com/                        *
 *																		*
 *  This file define the robot specifications - KBOT v2.0				*
 *																		*
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>      		*
 ************************************************************************/

#ifndef __ROBOT_CONFIG_H
#define __ROBOT_CONFIG_H

/* ------------------- 
  Robot geometry
------------------- */

//Dimensions in millimeters
#define WIDTH_OMNI_DEFAULT	  0.
#define WIDTH_DIFF_DEFAULT	  204.7		//KBOT width
#define DIAMETER_OMNI_DEFAULT 0.
#define DIAMETER_DIFF_DEFAULT 73.707	//KBOT wheel diameter

/* ------------------- 
  Control settings
------------------- */

#define _KP					           20.
#define _KD					           700.
#define SPEED_TRANSLATE_DEFAULT		   0.5
#define SPEED_ROTATION_DEFAULT         0.15
#define ACCELERATION_TRANSLATE_DEFAULT 0.00025
#define ACCELERATION_ROTATION_DEFAULT  0.00015

#endif //__ROBOT_CONFIG_H