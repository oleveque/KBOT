/************************************************************************
 * File : Button.ino                                                    *
 *  Example : How to use a button                                       *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
 #include <KBOT_CONFIG.h>

int myButton = BTN_START;

void setup() {
  USB.begin(9600);
  pinMode(myButton, INPUT_PULLUP);     
}

void loop() {
  USB.print("Le bouton est");
  if(!digitalRead(myButton)) USB.println(" appuyé.");
  else USB.println(" non appuyé.");
}
