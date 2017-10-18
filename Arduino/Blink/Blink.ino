#include "KBOT_CONFIG.h"

int myLed = LED_BUILDIN;

void setup() {
  pinMode(myLed, OUTPUT);     
}

void loop() {
  digitalWrite(myLed, HIGH);
  delay(1000);
  digitalWrite(myLed, LOW);
  delay(1000);
}
