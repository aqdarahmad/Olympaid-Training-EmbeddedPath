
void setup()
{
  Serial.begin(9600);    
}

void loop() 
{

   int ldr=analogRead(A4);
   Serial.println(ldr);
 
}
