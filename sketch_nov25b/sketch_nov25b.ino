int clockPin = 9;
int latchPin = 11;
int dataPin = 12;

byte LEDs=0x00;

int dt = 500;
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
  delay(dt);

  for (int i = 0; i < i < 255; i++) {
    LEDs++;
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
    digitalWrite(latchPin, HIGH);
    Serial.println(LEDs, HEX);
    delay(dt);
  }
}
