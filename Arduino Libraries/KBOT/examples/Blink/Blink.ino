/************************************************************************
 * File : Blink.ino                                                     *
 *  Example : How to blink the led buildin                              *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
 #include <KBOT_CONFIG.h>

int myLed = BUILTIN_LED;

void setup() {
  pinMode(myLed, OUTPUT);     
}

void loop() {
  digitalWrite(myLed, HIGH);
  delay(1000);
  digitalWrite(myLed, LOW);
  delay(1000);
}
