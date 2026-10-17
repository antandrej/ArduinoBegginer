#include <Stepper.h>

int stepsPerRevolution = 2048;
int motSpeed = 3;
int dt = 500;

Stepper myStepper(stepsPerRevolution, 8,10,9,11);

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
}

void loop() {
  myStepper.step(stepsPerRevolution/2);
  delay(dt);
  myStepper.step(-stepsPerRevolution/2);
  delay(dt);
}
