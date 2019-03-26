#include <Servo.h> 

Servo myservo;

void setup() 
{ 
  myservo.attach(9);
  myservo.write(90);  // set servo to mid-point
} 

void loop() {
   myservo.write(0);
  delay(600);
  myservo.write(150);
  delay(600);
  } 
