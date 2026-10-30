int speedPin = 5;
int dir1Pin = 4;
int dir2Pin = 3;

int tiltPin = 2;

int tiltVal;
int mSpeed = 200;

void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1Pin, OUTPUT);
  pinMode(dir2Pin, OUTPUT);
  pinMode(tiltPin, INPUT_PULLUP);
}

void loop() {
  tiltVal = digitalRead(tiltPin);

  digitalWrite(dir1Pin, LOW);
  digitalWrite(dir2Pin, HIGH);

  if (tiltVal == 0) {
    analogWrite(speedPin, mSpeed);
  }
  else if (tiltVal == 1) {
    analogWrite(speedPin, 0);
  }
}
