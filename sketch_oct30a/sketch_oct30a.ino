int speedPin = 5;
int dir1Pin = 4;
int dir2Pin = 3;

int mSpeed = 255;

void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1Pin, OUTPUT);
  pinMode(dir2Pin, OUTPUT);
}

void loop() {
  digitalWrite(dir1Pin, LOW);
  digitalWrite(dir2Pin, HIGH);
  analogWrite(speedPin, 255);
  delay(25);
  analogWrite(speedPin, mSpeed);
  delay(5000);
}
