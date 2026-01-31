int trigPin = 7;
int echoPin = 9;
int buIn = 5;

float Time;
float distance;

void setup()
{
  Serial.begin(9600);  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buIn, OUTPUT);  
}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  Time = pulseIn(echoPin, HIGH);
  distance = (Time * 0.0343) / 2;

  if (distance < 20) {
    tone(buIn, 1000);
  } else {
    noTone(buIn);
  }

  Serial.print("distance = ");
  Serial.println(distance);

  delay(100); 
}