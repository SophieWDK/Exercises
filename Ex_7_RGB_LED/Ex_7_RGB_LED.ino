byte pinR  = 13;
byte pinG  = 12;
byte pinB  = 11;

int incomingInt = 0;
int counter = 1;

void setup() {
  Serial.begin(115200);
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    incomingInt = Serial.parseInt();

    switch (counter) {
      case 1:
        analogWrite(pinR, incomingInt);
        counter ++;
        break;
      case 2:
        analogWrite(pinG, incomingInt);
        counter ++;
        break;
      case 3:
        analogWrite(pinB, incomingInt);
        counter ++;
        break;
      default:
        counter = 1;
    }
  }
}
