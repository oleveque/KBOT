/************************************************************************
 * File : Sharp.ino                                                     *
 *  Example : How to get a distance with a SHARP GPD2D12                *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
#include <KBOT_CONFIG.h>

void setup() {
  USB.begin(9600);
  pinMode(SHARP, INPUT);
}

void loop() {
  USB.print("Distance: ");
  USB.print(readDistance());
  USB.println(" cm.");
  delay(500);
}

float readDistance() {
  static float distance;
  distance = 22./(0.0048828125*(float)analogRead(SHARP)-0.2)-0.42; //Calcul à revoir
  return distance;
}
