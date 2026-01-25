void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(4,INPUT);

  
}

void loop() 
{
Serial.print(digitalRead(4));


  


}

void setup() {
 
Serial.begin(9600);
pinMode(4,INPUT_PULLUP);

  
}

void loop() 
{
  int pushButton = digitalRead(4);
  Serial.print(pushButton);
}

