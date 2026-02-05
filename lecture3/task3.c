#include <Servo.h>
int trigPin = 7;
int echoPin = 9;
int serIn   = 10;


float Time;
float distance;
Servo myservo;
void setup()
{
  Serial.begin(9600);  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(serIn);
  myservo.write(0);
 
   
}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  Time = pulseIn(echoPin, HIGH);
  distance = (Time * 0.0343)/2;
  Serial.print("distance = ");
  Serial.println(distance);

  if(distance < 100 )
  {
    myservo.write(90);
  }
  else
  {
  myservo.write(0);
  }
 
  delay(100);
  
}
