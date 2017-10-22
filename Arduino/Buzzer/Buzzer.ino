/************************************************************************
 * File : Buzzer.ino                                                    *
 *  Example : how to play music with a buzzer                           *
 *                                                                      *
 * Copyright : (c) 2017, Olivier Lévêque <oleveque@crans.org>           *
 ************************************************************************/
#include "KBOT_CONFIG.h"
#include "melody.h"

int speaker = BUZZER;

int MAX_COUNT = sizeof(melody)/2;
long tempo = 10000;
int rest_count = 50;
int toneM = 0;
int beat = 0;
long duration  = 0;

void setup() {
  pinMode(speaker, OUTPUT);
}

void loop() {
  playMelody();
}

void playMelody() {
  for (int i = 0; i < MAX_COUNT; i++) {
    toneM = melody[i];
    beat = beats[i];
    duration = beat*tempo;
    playTone();
    delayMicroseconds(3000);
  }
}

void playTone() {
  long elapsed_time = 0;
  if (toneM > 0) {
    while (elapsed_time < duration) {
      digitalWrite(speaker,HIGH);
      delayMicroseconds(toneM / 2);
      digitalWrite(speaker, LOW);
      delayMicroseconds(toneM / 2);
      elapsed_time += (toneM);
    }
   }
   else {
    for (int j = 0; j < rest_count; j++) {
      delayMicroseconds(duration);
    }
  }
}
