#include<Servo.h>
Servo ser1;
void setup() {
  ser1.attach(12,650,2400);
  // put your setup code here, to run once:
  Serial.println("hola");
}

void loop() {
  // put your main code here, to run repeatedly:
  ser1.write(0);
  delay(3000);
  ser1.write(90);
  delay(3000);
   Serial.println("hola");
  
}
