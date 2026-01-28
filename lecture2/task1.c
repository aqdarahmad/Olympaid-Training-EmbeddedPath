// declare variable for bin numbers
int led=7;
int Rled=13;

const int button=4;


int buttonState;
void setup() {
 
pinMode(led,OUTPUT);
pinMode(Rled,OUTPUT);
pinMode(button,INPUT);
}

void loop() 
{
  
  buttonState=digitalRead(button);
  if(buttonState){
  digitalWrite(led,HIGH);
  digitalWrite(Rled,LOW);
  }
  else{
  digitalWrite(Rled,HIGH);  
  digitalWrite(led,LOW);  
  }
}

