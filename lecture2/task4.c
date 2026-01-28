#define pot A0



void setup() {
 
Serial.begin(9600);

}

void loop() 
{
 int value=analogRead(pot); 
   Serial.print("Potentiemeter value = ");
  Serial.println(value);
  delay(1000);
}

