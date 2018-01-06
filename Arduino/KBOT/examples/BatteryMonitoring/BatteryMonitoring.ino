/************************************************************************
 * File : BatteryMonitoring.ino                                         *
 *  Example : How to get cell battery voltage                           *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
#include <KBOT_CONFIG.h>

float voltageCell1 = 0.;

void setup() {
  USB.begin(9600);
}

void loop() {
  voltageCell1 = 0.00488758553*(float)analogRead(BATT1); //mesure*(5/1023)
  USB.println(voltageCell1);
  delay(10);
}
