char t;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);  //left FRONT motor
  pinMode(12, OUTPUT);  //left BACK motor
  pinMode(11, OUTPUT);  //right FRONT motor
  pinMode(10, OUTPUT);  //right BACK motor
}

void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
if(t == 'F'){           //Move forward
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
}

else if(t == 'G'){      //Move reverse
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
}

else if(t == 'L'){      //Turn left(right FRONT motor rotates in forward direction)
  digitalWrite(11, HIGH);
}

else if(t == 'R'){      //Turn right(left FRONT motor rotates in forward direction)
  digitalWrite(13, HIGH);
}

delay(100);
}
