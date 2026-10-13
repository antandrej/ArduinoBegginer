int ledPin = 9;
int downPin = 4;
int upPin = 2;

int dt = 150;
int btnUp = 0;
int btnDown = 0;

int step = 50;
int currentVal = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
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
    }
    Serial.println(currentVal);
    delay(dt);
  }

  if (btnDown == 1 && btnUp == 0) {
    analogWrite(ledPin, currentVal);
    if (currentVal >= 0+step) {
      currentVal = currentVal - step;
    }
    Serial.println(currentVal);
    delay(dt);
  }
}
