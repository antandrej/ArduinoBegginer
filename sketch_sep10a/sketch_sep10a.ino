int myNumb;
int buzzPin = 8;

String msg = "Number? ";
void setup() {
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  Serial.println(msg);
  while (Serial.available() == 0) {
    
  }
  myNumb = Serial.parseInt();
  if (myNumb > 10) {
    digitalWrite(buzzPin, HIGH);
    delay(200);
    digitalWrite(buzzPin, LOW);
  }
}
