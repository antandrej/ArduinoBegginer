int clockPin = 9;
int latchPin = 11;
int dataPin = 12;

byte LEDs1=0x00;
byte LEDs2=0x00;

int dt = 450;
void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs1);
  digitalWrite(latchPin, HIGH);
  delay(dt);

  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs2);
  digitalWrite(latchPin, HIGH);
  delay(dt);
}
