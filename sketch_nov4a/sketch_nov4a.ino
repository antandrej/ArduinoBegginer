int yPin = A1;
int dir1Pin = 4;
int dir2Pin = 3;
int speedPin = 5;

int yVal;
int speedVal;

void setup() {
  pinMode(yPin, INPUT);
  pinMode(dir1Pin, OUTPUT);
  pinMode(dir2Pin, OUTPUT);
  pinMode(speedPin, OUTPUT);
}

void loop() {
  yVal = analogRead(yPin);

/*
  if (yVal == 512) {
    speedVal = 0;
    digitalWrite(dir1Pin, LOW);
    digitalWrite(dir2Pin, LOW);
  }
*/

  else if (yVal < 512) {
    digitalWrite(dir1Pin, LOW);
    digitalWrite(dir1Pin, HIGH);
    speedVal = -255./512.*yVal+255.;
    analogWrite(speedPin, speedVal)
  }

  else if (yVal >= 512) {
    digitalWrite(dir1Pin, HIGH);
    digitalWrite(dir1Pin, LOW);
    speedVal = (255./512.)*yVal-255.;
    analogWrite(speedPin, speedVal)
  }
}
