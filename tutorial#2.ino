Tutorial no ----->  02
Youtube channel   ------>  All About Technology
void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7,HIGH);
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(7,LOW);
digitalWrite(13,LOW);
delay(1000);
}
