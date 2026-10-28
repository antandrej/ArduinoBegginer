int xPin = A0;
int yPin = A1;

int sPin = 2;

int xVal;
int yVal;
int sVal;

int dt = 500;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT_PULLUP);
}

void loop() {
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);

  sVal = digitalRead(sPin);

  delay(dt);

  Serial.print("X Value: ");
  Serial.print(xVal);

  Serial.print(" Y Value: ");
  Serial.print(yVal);

  Serial.print(" S State is: ");
  Serial.println(sVal);
}
