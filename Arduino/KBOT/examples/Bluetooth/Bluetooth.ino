/************************************************************************
 * File : Bluetooth.ino                                                 *
 *  Example : How to use bluetooth                                      *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
#include <KBOT_CONFIG.h>

#define port BLUETOOTH
char recievedbyte;

void setup() {
  port.begin(9600);
}

void loop() {
  while(port.available()) {
    recievedbyte = (char)port.read();
    port.print(recievedbyte);
  }
}
