int lightPin = A0;
int lightVal;

int redPin = 10;
int greenPin = 9;

void setup() {
  pinMode(lightPin, INPUT);  
  pinMode(redPin, OUTPUT);  
  pinMode(greenPin, OUTPUT);  
}

void loop() {
  lightVal = analogRead(lightPin);
  if (lightVal < 550) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  }
  else if (lightVal >= 550){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
}
