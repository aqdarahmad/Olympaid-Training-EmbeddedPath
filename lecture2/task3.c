
int led=9;


void setup() {
 
pinMode(led,OUTPUT);

}

void loop() 
{
  analogWrite(led,0);
  delay(1000);
  analogWrite(led,125);
  delay(1000);
  analogWrite(led,255);
  delay(1000);
  
}

