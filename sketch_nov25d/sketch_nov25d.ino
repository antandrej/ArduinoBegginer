int clockPin = 9;
int latchPin = 11;
int dataPin = 12;

byte LEDs = 0x11;
byte FlippedLEDs;

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

  FlippedLEDs = 255-LEDs;
  delay(dt);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, FlippedLEDs);
  digitalWrite(latchPin, HIGH);

  FlippedLEDs = 255+LEDs;
  delay(dt);
}
