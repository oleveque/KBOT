#include "KBOT_CONFIG.h"

Servo myServo;

void setup() {
  myServo.attach(SERVO);
  myServo.write(0);
  delay(15);
}

void loop() {
  for (int val = 0; val < 180; val++) {
    myServo.write(val);
    delay(5);
  }
  delay(500);
  for (int val = 180; val > 0; val--) {
    myServo.write(val);
    delay(5);
  }
  delay(500);
}

