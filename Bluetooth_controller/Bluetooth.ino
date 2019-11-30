char t;

//const int buzzer = 8;

int enB = 9;
int in3 = 6;
int in4 = 7;

int rotDirection = 0;

void setup() {
  Serial.begin(9600); 
  pinMode(enB, OUTPUT);  
  pinMode(in3, OUTPUT);  //venstre for-hjul
  pinMode(in4, OUTPUT);  //venstre for-hjul

  //digitalWrite(in3, LOW);
  //digitalWrite(in4, HIGH);
  //pinMode(10, OUTPUT);  //right motors reverse
  // pinMode(buzzer, OUTPUT);
  // pinMode(9, OUTPUT);
  // pinMode(8, OUTPUT));
  // pinMode(7, OUTPUT);
  // pinMode(6, OUTPUT);
}

void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
if(t == 'F'){           //Move forward(all motors rotate in forward direction)
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, HIGH);
}
//
//else if(t == 'G'){      //Move reverse(all motors rotate in reverse direction)
//  digitalWrite(13, LOW);
//  digitalWrite(11, LOW);
//  digitalWrite(12, HIGH);
//  digitalWrite(10, HIGH);
//}
//else if(t == 'L'){      //Turn left(right motors rotates in forward direction)
//  digitalWrite(13, HIGH);
//  digitalWrite(12, HIGH);
//  digitalWrite(10, LOW);
//  digitalWrite(11, LOW);
//}
//else if(t == 'R'){      //Turn right(left motors rotates in forward direction)
//  digitalWrite(13, LOW);
//  digitalWrite(12, LOW);
//  digitalWrite(10, HIGH);
//  digitalWrite(11, HIGH);
//}
//else if(t == 'X'){
//  tone(buzzer, 1000); //send 1KHz sound signal...
//  delay(100);  // 1sec
//  noTone(buzzer); // stop sound
//  delay(100); // 1sec
//}
//else if(t == 'W'){      //Turn LED on or off
//  digitalWrite(9, HIGH);
//}
//else if(t == 'w'){
//  digitalWrite(9, LOW);
//}
//else if(t == 'S'){
//  digitalWrite(13, LOW);
//  digitalWrite(12, LOW);
//  digitalWrite(11, LOW);
//  digitalWrite(10, LOW);
//}
//delay(100);
}
