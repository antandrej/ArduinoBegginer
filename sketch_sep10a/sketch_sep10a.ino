int potVal;
int buzzPin = 8;
int potPin = A3;

void setup() {
  //Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() { 
  potVal = analogRead(potPin);

  while (potVal > 1000) {
    digitalWrite(buzzPin, HIGH);
    potVal = analogRead(potPin);
  }
  digitalWrite(buzzPin, LOW);
}