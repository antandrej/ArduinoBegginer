int LED8 = 12;
int LED4 = 11;
int LED2 = 10;
int LED1 = 9;

int longWait = 1500;
int smallWait = 750;

void setup() {
  pinMode(LED8, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() {
  //0
  digitalWrite(LED8, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, LOW);
  delay(smallWait);
  //1
  digitalWrite(LED8, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, HIGH);
  delay(smallWait);
  //2
  digitalWrite(LED8, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, LOW);
  delay(smallWait);
  //3
  digitalWrite(LED8, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, HIGH);
  delay(smallWait);
  //4
  digitalWrite(LED8, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, LOW);
  delay(smallWait);
  //5
  digitalWrite(LED8, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, HIGH);
  delay(smallWait);
  //6
  digitalWrite(LED8, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, LOW);
  delay(smallWait);
  //7
  digitalWrite(LED8, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, HIGH);
  delay(smallWait);
  //8
  digitalWrite(LED8, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, LOW);
  delay(smallWait);
  //9
  digitalWrite(LED8, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, HIGH);
  delay(smallWait);
  //10
  digitalWrite(LED8, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, LOW);
  delay(smallWait);
  //11
  digitalWrite(LED8, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, HIGH);
  delay(smallWait);
  //12
  digitalWrite(LED8, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, LOW);
  delay(smallWait);
  //13
  digitalWrite(LED8, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, HIGH);
  delay(smallWait);
  //14
  digitalWrite(LED8, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, LOW);
  delay(smallWait);
  //15
  digitalWrite(LED8, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED1, HIGH);
  delay(longWait);
}
