#include <Servo.h>

Servo servo1; 
const int flexpin = 0;
const int potenciometerPin = 1;

void setup()  
{
  Serial.begin(9600);  
  servo1.attach(9);
}


void loop()
{
  int flexposition;  
  int servoposition;
  flexposition = analogRead(flexpin); 
  servoposition = map(flexposition, 1000, 1024, 0, 180); 

  int potenciometer;
  int servoPosPoten;
  potenciometer = analogRead(potenciometerPin);
  servoPosPoten = map(potenciometer,0,1023,0,180);
  
  servoposition = constrain(servoPosPoten, 0, 180); // primer parametro es para la entrada( del potenciometro o del sensor flex) ni idea para que esta si hace lo mismo con el valor directo al write
  servo1.write(servoposition);//servoposition  
  Serial.print("sensor: "); 
  Serial.print(flexposition);
  Serial.print(" Potenciometro: ");
  Serial.print(potenciometer); 
  Serial.print(" servo: "); 
  Serial.println(servoposition);  
  //delay(0); 
}
