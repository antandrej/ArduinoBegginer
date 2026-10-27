#include <Servo.h>

int servoPin = 9;
int lightPin = A4;

int servoPos = 0;
int lightVal;

Servo myServo;

void setup() {
  myServo.attach(servoPin);
  pinMode(lightPin, INPUT);  
}

void loop() {
  lightVal = analogRead(lightPin);
  servoPos = (-16./23.)*lightVal+16.*780./63.;
  myServo.write(servoPos);
}
