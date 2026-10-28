#include <Servo.h>
int xPin = A0;
int yPin = A1;
int sPin = 2;

int xServoPin = 8;
int yServoPin = 9;

int buzzPin = 7;

int xVal;
int yVal;
int sVal;

int xAngle;
int yAngle;

Servo xServo;
Servo yServo;

int dt = 500;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT_PULLUP);
  pinMode(buzzPin, OUTPUT);
  xServo.attach(xServoPin);
  yServo.attach(yServoPin);
}

void loop() {
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  sVal = digitalRead(sPin);

  xAngle = (180./1023.)*xVal;
  yAngle = (180./1023.)*yVal;

  xServo.write(xAngle);
  yServo.write(yServo);

  if(sVal == 0){
    digitalWrite(buzzPin, HIGH);
  }
  else{
    digitalWrite(buzzPin, LOW);
  }
}