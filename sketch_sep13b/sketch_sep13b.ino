int buzzPin = 8;
int potVal;
int potPin = A1;
int toneDelay;

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() { 
  potVal = analogRead(potPin);
  toneDelay = (9940./1023.) * potVal + 60;
  digitalWrite(buzzPin, HIGH);
  delay(toneDelay);
  digitalWrite(buzzPin, LOW);
  delay(toneDelay);
}