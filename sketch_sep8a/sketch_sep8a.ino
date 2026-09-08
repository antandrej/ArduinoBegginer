int numBlinks;
String msg = "Treptaji: ";

int j;
int redPin = 6;
int bt = 500;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
}

void loop() {
  Serial.println(msg);
  while (Serial.available() == 0){

  }
  numBlinks = Serial.parseInt();

  for(j=0; j<numBlinks; j++){
    digitalWrite(redPin, HIGH);
    delay(bt);
    digitalWrite(redPin, LOW);
    delay(bt);
  }
}
