#include <servo.h>.

// Trigger, Echo, Duration and Distance - Ultrasonic sensor
const int trigPin = 10;
const int echoPin = 11;
long duration;
int distance;

//Creates a servo object for controlling the servo motor
Servo myservo;

void setup() {
  Serial.begin(9600);
  mySero.attach(12);  // Servo motor's pin
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Rotates the servo from 15 to 165 degrees
  for(int i = 15; i <= 165; i++){
    myServo.write(i);
    delay(30);
    distance = calculateDistance(); 
    // Calls a function for calculating the distance.

    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
  for(int i = 165; i > 15; i--){
    myServo.write(i);
    delay(30);
    distance = calculateDistance();

    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}

int calculateDistance(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Sets trigPin on HIGH for 10 micro sec.
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = PulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  return distance;
}
