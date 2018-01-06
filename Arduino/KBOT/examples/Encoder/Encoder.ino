/************************************************************************
 * File : Encoder.ino                                                   *
 *  Example : How to use an encoder                                     *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
#include <KBOT_CONFIG.h>

volatile long cpt = 0L;

void setup() {
  USB.begin(9600);
  pinMode(ENCA_LEFT, INPUT);
  pinMode(ENCB_LEFT, INPUT);
  attachInterrupt(digitalPinToInterrupt(ENCA_LEFT), encA, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENCB_LEFT), encB, CHANGE);
}

void loop() {
  USB.print("Position angulaire de la roue droite : ");
  USB.print(cpt);
  USB.println(" deg");
  delay(10);
}

void encA() {
  if (digitalRead(ENCA_LEFT)) {
    if (digitalRead(ENCB_LEFT)) cpt++;
    else cpt--;
  }
  else {
    if (digitalRead(ENCB_LEFT)) cpt--;
    else cpt++;
  }
}

void encB() {
  if (digitalRead(ENCB_LEFT)) {
    if (digitalRead(ENCA_LEFT)) cpt--;
    else cpt++;
  }
  else {
    if (digitalRead(ENCA_LEFT)) cpt++;
    else cpt--;
  }
}

