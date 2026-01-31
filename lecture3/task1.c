int trigPin=7;
int echoPin=9;
float Time;
float distance;
void setup()
{
Serial.begin(9600);  
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);

}

void loop() 
{
digitalWrite(trigPin,LOW);  
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);  
digitalWrite(trigPin,LOW);  
delayMicroseconds(2); 
Time=pulseIn(echoPin,HIGH);
distance=Time*0.0343;
Serial.print("distance = ");
Serial.println(distance);
 delay(100); 
}