/************************************************************************
 * File : LCD.ino                                                       *
 *  Example : how to use the LCD screen                                 *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
 #include "KBOT_CONFIG.h"

int LDCaddress = 0x3F; //flash I2C_Scanner.ino to know which address to use
LiquidCrystal_I2C lcd(LDCaddress,16,2);

void setup() {
  lcd.init();              
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello, KBOT!");
  lcd.setCursor(2,1);
  lcd.print("By [Kro]bot");
}


void loop() {
  
}
