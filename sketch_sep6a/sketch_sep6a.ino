int greenPin = 9;
int brightness1 = 255;
int brightness2 = 125;
int brightness3 = 10;
void setup() {
  pinMode(greenPin, OUTPUT);
}

void loop() {
  analogWrite(greenPin, brightness1);
  delay(150);

 analogWrite(greenPin, brightness2);
  delay(150);

  analogWrite(greenPin, brightness3);
  delay(150); 
}
