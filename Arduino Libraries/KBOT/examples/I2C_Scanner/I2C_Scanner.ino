/************************************************************************
 * File : I2C_Scanner.ino                                               *
 *  Example : Scan I2C address devices connected                        *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
 #include <KBOT_CONFIG.h>

void setup() {
  I2C.begin();
  USB.begin(9600);
  USB.println("I2C Scanner");
}


void loop()
{
  byte error, address;
  int nDevices;
  
  USB.println("Scanning...");
  
  nDevices = 0;
  for(address = 1; address < 127; address++ ) {
    I2C.beginTransmission(address);
    error = I2C.endTransmission();
  
    if (error == 0) {
      USB.print("I2C device found at address 0x");
      if (address<16) USB.print("0");
      USB.println(address,HEX);
      nDevices++;
    }
    else if (error==4) {
      Serial.print("Unknown error at address 0x");
      if (address<16) USB.print("0");
      USB.println(address,HEX);
    }    
  }
  if (nDevices == 0) USB.println("No I2C devices found...");
  else USB.println("done\n");
  delay(5000);
}
