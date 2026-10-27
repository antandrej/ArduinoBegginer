#include <Servo.h>
int servoPin = 9;
int servoPos = 0;

Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  Serial.println("Angle for Servo? ");
  if (Serial.available() == 0) {
  }
  servoPos = Serial.parseInt();
  myServo.write(servoPos);
}
