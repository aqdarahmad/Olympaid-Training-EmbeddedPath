// circuit that control a traffic light using 


String text = "";

void setup() {
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(5, OUTPUT); 

  Serial.begin(9600);
  Serial.println("Type: red, yellow, or green");
}

void loop() {
  if (Serial.available() > 0) {
    text = Serial.readStringUntil('\n');
    text.trim(); // remove spaces and newline

   
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);

    if (text == "red") {
      digitalWrite(7, HIGH);
      Serial.println("Red LED ON");
    }
    else if (text == "yellow") {
      digitalWrite(5, HIGH);
      Serial.println("Yellow LED ON");
    }
    else if (text == "green") {
      digitalWrite(6, HIGH);
      Serial.println("Green LED ON");
    }
    else {
      Serial.println("Invalid command");
    }
  }
}
