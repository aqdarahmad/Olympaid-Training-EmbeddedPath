void setup() {
 
Serial.begin(9600);
pinMode(4,INPUT_PULLUP);

  
}

void loop() 
{
  int pushButton = digitalRead(4);
  
   Serial.print("Button State = ");
   Serial.println(pushButton);
}

