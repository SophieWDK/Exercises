byte pinR  = 13;
byte pinG  = 12;
byte pinB  = 11;
int wait = 1000;
int incomingInt = 0;
int counter = 1;

void setup() {
  Serial.begin(115200);
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void loop() {

  pinMode(pinR, LOW);
  pinMode(pinG, LOW);
  pinMode(pinB, LOW);

  if (Serial.available() > 0) {
    
    incomingInt = Serial.parseInt();
    Serial.print("I received: ");
    Serial.println(incomingInt);

    if (counter == 1){
      analogWrite(pinR, incomingInt);
    }
    if (counter == 2){
      analogWrite(pinG, incomingInt);
    }
    if (counter == 3){
      analogWrite(pinB, incomingInt);
    }
    counter += counter;
    
  delay(wait);

  }
}
