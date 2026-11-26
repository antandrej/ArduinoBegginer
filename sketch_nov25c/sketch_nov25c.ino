int clockPin = 9;
int latchPin = 11;
int dataPin = 12;

byte LEDs = 0b10000001;
//byte LEDs = 0b10000000;

int dt = 400;
void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
  digitalWrite(latchPin, HIGH);

  LEDs = LEDs/128+LEDs*2;
  delay(dt);
}
