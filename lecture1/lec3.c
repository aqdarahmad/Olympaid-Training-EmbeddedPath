void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(4,INPUT);

  
}

void loop() 
{
Serial.print(digitalRead(4));


  


}

