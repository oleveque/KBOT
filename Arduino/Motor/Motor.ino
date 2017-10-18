#include "KBOT_CONFIG.h"

#define RIGHT 1
#define LEFT 2

void setup() {
  pinMode(MOT_LEFT1, OUTPUT);
  pinMode(MOT_LEFT2, OUTPUT);
  pinMode(MOT_RIGHT3, OUTPUT);
  pinMode(MOT_RIGHT4, OUTPUT);
  
}

void loop() {
  setSpeed(100, LEFT);
}

void setSpeed(int s, int mot) {
  if (mot==1) {
    if (s>0) {
      analogWrite(MOT_RIGHT3,0);
      analogWrite(MOT_RIGHT4,s);
    }
    else {
      analogWrite(MOT_RIGHT3,-s);
      analogWrite(MOT_RIGHT4,0);
    }
  }
  if (mot==2) {
    if (s>0) {
      analogWrite(MOT_LEFT1,0);
      analogWrite(MOT_LEFT2,s);
    }
    else {
      analogWrite(MOT_LEFT1,-s);
      analogWrite(MOT_LEFT2,0);
    }
  }
}

