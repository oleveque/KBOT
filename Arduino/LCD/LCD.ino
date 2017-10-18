#include "KBOT_CONFIG.h"

LiquidCrystal_I2C lcd(0x3F,16,2);

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
