byte ledY1 = 13;
byte ledR1 = 12;
byte ledG = 11;
byte ledR2 = 10;
byte ledY2 = 9;
int incomingByte = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop () {
if (Serial.available() > 0 ) {
incomingByte = Serial.read();

  if (incomingByte == 65 or incomingByte == 97){
  Serial.print("I received: ");
  Serial.println((char)incomingByte);
  digitalWrite(ledY1,HIGH);
  delay(2000);
  digitalWrite(ledY1,LOW);
}

  if (incomingByte == 66 or incomingByte == 98){
  Serial.print("I received: ");
  Serial.println((char)incomingByte);
  digitalWrite(ledR1,HIGH);
  delay(2000);
  digitalWrite(ledR1,LOW);
}

  if (incomingByte == 67 or incomingByte == 99){
  Serial.print("I received: ");
  Serial.println((char)incomingByte);
  digitalWrite(ledG,HIGH);
  delay(2000);
  digitalWrite(ledG,LOW);
}
  if (incomingByte == 68 or incomingByte == 100){
  Serial.print("I received: ");
  Serial.println((char)incomingByte);
  digitalWrite(ledR2,HIGH);
  delay(2000);
  digitalWrite(ledR2,LOW);
}
  if (incomingByte == 69 or incomingByte == 101){
  Serial.print("I received: ");
  Serial.println((char)incomingByte);
  digitalWrite(ledY2,HIGH);
  delay(2000);
  digitalWrite(ledY2,LOW);
}

}
}
