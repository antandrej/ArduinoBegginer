int buzzPin = 8;
int dt1 = 1;
int dt2 = 2;
int j;

void setup() {
  pinMode(buzzPin, OUTPUT);
}

void loop() { 
  for (j=0; j<10; j++) {
    digitalWrite(buzzPin, HIGH);
    delay(dt1);
    digitalWrite(buzzPin, LOW);
    delay(dt1);
  }

  for (j=0; j<10; j++) {
    digitalWrite(buzzPin, HIGH);
    delay(dt2);
    digitalWrite(buzzPin, LOW);
    delay(dt2);
  }
}