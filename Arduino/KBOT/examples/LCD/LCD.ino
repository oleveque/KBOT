/************************************************************************
 * File : LCD.ino                                                       *
 *  Example : How to use the LCD screen                                 *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
 #include <KBOT_CONFIG.h>

int LCD_Address = 0x3F; //flash before I2C_Scanner.ino to know which address to use
LiquidCrystal_I2C myLCD(LCD_Address,16,2);

void setup() {
  myLCD.init();              
  myLCD.backlight();
  myLCD.setCursor(3,0);
  myLCD.print("Hello, KBOT!");
  myLCD.setCursor(2,1);
  myLCD.print("By [Kro]bot");
}


void loop() {
  
}
