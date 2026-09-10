int redPin = 9;
int greenPin = 10;
int bluePin = 11;

String myColor;
String msg = "Color? ";

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  Serial.println(msg);
  while (Serial.available() == 0) {
    
  }

  myColor = Serial.readString();
  myColor.trim();
  myColor.toLowerCase();

  if (myColor == "red") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  else if (myColor == "green") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }
  else if (myColor == "blue") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
  else if (myColor == "off") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }

  ///
  else if (myColor == "aqua") {
    int greenVal = 255;
    int blueVal = 80;
    digitalWrite(redPin, LOW);
    analogWrite(greenPin, greenVal);
    analogWrite(bluePin, blueVal);
    while (Serial.available() == 0) {
      for (int j = 0; j < 5; j++) {
        if(Serial.available() > 0 )
          break;
        greenVal = greenVal - 40;
        blueVal = blueVal + 32;
        analogWrite(greenPin, greenVal);
        analogWrite(bluePin, blueVal);
        delay(300);
        Serial.println(greenVal);
      }
      for (int j = 0; j < 5; j++) {
        if(Serial.available() > 0 )
          break;
        greenVal = greenVal + 40;
        blueVal = blueVal - 32;
        analogWrite(greenPin, greenVal);
        analogWrite(bluePin, blueVal);
        delay(500);
        Serial.println(greenVal);
      }
    }
  }
}