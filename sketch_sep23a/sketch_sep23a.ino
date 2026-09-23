int inputPin = A0;
int buzzPin = 9;
int delayTime;
int lightVal;

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  lightVal = analogRead(inputPin);
  delayTime = (9940./334.) * lightVal - (994.*250./334.) + 60.;
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(delayTime);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(delayTime);
}