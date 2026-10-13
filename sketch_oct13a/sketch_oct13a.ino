int ledPin = 9;
int downPin = 4;
int upPin = 2;
int buzzPin = 7;

int dt = 150;
int btnUp = 0;
int btnDown = 0;

int step = 50;
int currentVal = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(downPin, INPUT);
  pinMode(upPin, INPUT);
}

void loop() {
  btnDown = digitalRead(downPin);
  btnUp = digitalRead(upPin);
  
  if (btnDown == 0 && btnUp == 1) {
    analogWrite(ledPin, currentVal);
    if (currentVal <= 255-step) {
      currentVal = currentVal + step;
      digitalWrite(buzzPin, LOW);
    }
    else {
      currentVal = 255;
      digitalWrite(buzzPin, HIGH);
    }
    Serial.println(currentVal);
    delay(dt);
  }

  if (btnDown == 1 && btnUp == 0) {
    analogWrite(ledPin, currentVal);
    if (currentVal >= 0+step) {
      currentVal = currentVal - step;
      digitalWrite(buzzPin, LOW);
    }
    else {
      currentVal = 0;
    }
    Serial.println(currentVal);
    delay(dt);
  }
}
