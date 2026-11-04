int dir1Pin = 4;
int dir2Pin = 3;
int speedPin = 5;

int btnLeftPin = 10;
int btnRightPin = 11;

int speedVal = 0;

int btnLeftVal;
int btnRightVal;

int dt = 400;

void setup() {
  pinMode(dir1Pin, OUTPUT);
  pinMode(dir2Pin, OUTPUT);
  pinMode(speedPin, OUTPUT);

  pinMode(btnLeftPin, INPUT_PULLUP);
  pinMode(btnRightPin, INPUT_PULLUP);
}

void loop() {
  btnLeftVal = digitalRead(btnLeftPin);
  btnRightVal = digitalRead(btnRightPin);

  if (btnRightVal == 0) {
    speedVal = speedVal - 10;
    delay(dt);
  }
  if (btnRightVal == 0) {
    speedVal = speedVal + 10;
    delay(dt);
  }

  if (speedVal > 255) {
    speedVal = 255;
  }
  if (speedVal < -255) {
    speedVal = -255;
  }

  if (speedVal == 10) {
    speedVal = 100;
  }
  if (speedVal == -10) {
    speedVal = -100;
  }

  if (speedVal == 90 || speedVal == 95) {
    speedVal = 0;
  }
  if (speedVal == 90 || speedVal == 95) {
    speedVal = 0;
  }

  if (speedVal == 0) {
    analogWrite(speedPin, 0);
  }
  if (speedVal > 0) {
    digitalWrite(dir1Pin, HIGH);
    digitalWrite(dir2Pin, LOW);
    analogWrite(speedPin, speedVal);
  }
  if (speedVal < 0) {
    digitalWrite(dir1Pin, LOW);
    digitalWrite(dir2Pin, HIGH);
    analogWrite(speedPin, abs(speedVal));
  }
}
