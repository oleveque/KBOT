/************************************************************************
 * File : UserInterface.ino                                             *
 *  Example : how to use buttons and leds of the user interface         *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
#include "KBOT_CONFIG.h"

int leds[10] = {LED0,LED1,LED2,LED3,LED4,LED5,LED6,LED7,LED8,LED9};
int buttons[5] = {BTN_UP,BTN_DOWN,BTN_CENTER,BTN_LEFT,BTN_RIGHT};

void setup() {
  for (int i=0; i<10; i++) {
    pinMode(leds[i], OUTPUT);
  }
  for (int i=0; i<5; i++) {
    pinMode(buttons[i], INPUT_PULLUP);
  }
}

void loop() {
  switch (selectedButton()) {
    case 0: //UP
      digitalWrite(LED0,HIGH);
      break;
    case 1: //DOWN
      digitalWrite(LED1,HIGH);
      break;
    case 2: //CENTER
      digitalWrite(LED2,HIGH);
      break;
    case 3: //LEFT
      digitalWrite(LED3,HIGH);
      break;
    case 4: //RIGHT
      digitalWrite(LED4,HIGH);
      break;
    default: 
      for (int i=0; i<10; i++) {
        digitalWrite(leds[i],LOW);
      }
      break;
  }
}

int selectedButton() {
  int btn = -1;
  for (int i=0; i<5; i++) {
    if (!digitalRead(buttons[i])) btn = i;
  }
  return btn;
}
