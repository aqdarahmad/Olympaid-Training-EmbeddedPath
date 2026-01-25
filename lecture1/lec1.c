// TRafic light simulation
// red -> yellow -> green

void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(7,OUTPUT);

  
}
// by default start in setup then go to loop forever
// declare constant in setup like declare ouptout number

void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
 digitalWrite(13,LOW);
 delay(1000);
   digitalWrite(12,HIGH);
  delay(1000);
 digitalWrite(12,LOW);
 delay(1000);
   digitalWrite(7,HIGH);
  delay(1000);
 digitalWrite(7,LOW);
 delay(1000);
  // put your main code here, to run repeatedly:


}

