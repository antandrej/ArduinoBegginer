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
  if (myColor == "red" || myColor == "Red" || myColor == "RED") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  if (myColor == "green" || myColor == "Green" || myColor == "GREEN") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }
  if (myColor == "blue" || myColor == "Blue" || myColor == "BLUE") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
  if (myColor == "off" || myColor == "OFF" || myColor == "Off") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }

  ///
  if (myColor == "aqua" || myColor == "Aqua" || myColor == "AQUA") {
    digitalWrite(redPin, LOW);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 80);
  }
  if (myColor == "pink" || myColor == "Pink" || myColor == "PINK") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 130);
    analogWrite(bluePin, 180);
  }
}
