#include <Stepper.h>

int stepsPerRevolution = 2048;
int motSpeed = 5;
int dt = 500;

int btnPin = 7;
int motDir = 1;

int btnValOld = 1;
int btnValNew;

Stepper myStepper(stepsPerRevolution, 8,10,9,11);

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
  pinMode(btnPin, INPUT_PULLUP);
  digitalWrite(btnPin, HIGH);
}

void loop() {
  btnValNew = digitalRead(btnPin);
  if (btnValOld == 1 && btnValNew == 0) {
    motDir = motDir*(-1);
  }
  btnValOld = btnValNew;
  myStepper.step(motDir*1);
}
