int trigPin = 7;
int echoPin = 9;
int pinIn   = 5;


float Time;
float distance;

void setup()
{
  Serial.begin(9600);  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pinIn, OUTPUT);
   
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

  if(distance < 50)
  {
    tone(pinIn,1000);
  }
  else if(distance < 100)
  {
    tone(pinIn,800);
    delay(100);
    noTone(pinIn);
    delay(100);
  }
  else if(distance < 150) 
  {
    tone(pinIn , 600);
    delay(300);
    noTone(pinIn);
    delay(300);
  }
  else{
   noTone(pinIn);
  }

  
}
