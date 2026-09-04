int redLED = 10;
int greenLED = 11;
int blueLED = 12;

int redWait = 150;
int greenWait = 500;
int blueWait = 1200;

int longWait = 2000;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  //red
  for (int i = 0; i < 5; i++) {
    digitalWrite(redLED, HIGH);
    delay(redWait);
    digitalWrite(redLED, LOW);
    delay(redWait);
  }
  delay(longWait);
  //green
  for (int i = 0; i < 10; i++) {
    digitalWrite(greenLED, HIGH);
    delay(greenWait);
    digitalWrite(greenLED, LOW);
    delay(greenWait);
  }
  delay(longWait);

  //blue
  for (int i = 0; i < 15; i++) {
    digitalWrite(blueLED, HIGH);
    delay(blueWait);
    digitalWrite(blueLED, LOW);
    delay(blueWait);
  }
  delay(longWait);
  delay(longWait);
}
