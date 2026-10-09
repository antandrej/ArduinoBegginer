int buttonPin = 12;
int ledPin = 8;
bool buttonRead;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonRead = digitalRead(buttonPin);

  if (buttonRead == 1) {
    digitalWrite(ledPin, LOW);
  }

  while (buttonRead == 0) {
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
    delay(250);
    //digitalWrite(ledPin, HIGH);
    buttonRead = digitalRead(buttonPin);
  }
}
