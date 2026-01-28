// declare variable for bin numbers
int led=7;

const int button=4;

//#define led 7
int buttonState;
void setup() {
 
pinMode(led,OUTPUT);
pinMode(button,INPUT);
  
//pinMode(4,INPUT_PULLUP);

  
}

void loop() 
{
  
  buttonState=digitalRead(button);
  if (buttonState==HIGH)
  digitalWrite(led,HIGH);
  else
  digitalWrite(led,LOW);  
 
}

