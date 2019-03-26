#include<Wire.h>
#include <LiquidCrystal_I2C.h> 
#include<Servo.h>

//lcd
LiquidCrystal_I2C lcd(0x27,16,2);
String msg1 = " Encendieno...";
String msg2 = " Chauuu!! ";
int tam1 = msg1.length();
int tam2 = msg2.length();

//sensor
int val;
int tempPin = 0;
int x;
float cent=100;

//servo
Servo ser1;

void setup() {
//del lcd
  lcd.init();
  lcd.backlight();
  lcd.clear();
  //lcd.setCursor(0,0);
  lcd.print(msg1); //primer mensaje
  delay(1000);
  lcd.clear();
  lcd.print(" Sensor Iniciado");
  delay(1000);
  lcd.clear();

//del sensor
   Serial.begin(9600);

//servo
  ser1.attach(12,650,2400);
  
}

void loop() { 
  
  val = analogRead(0);
  float mv = (val/1024.0)*5000.0;
  float cent = mv/10;
  //Serial.println("Temperatura: "+String(cent)+"°C"); 
  lcd.print("Temperatura: ");
  lcd.setCursor(0,1);
  lcd.print(String(cent)+" Grados ");
  delay(500);
  if (cent > 38.0){
    ser1.write(0);
    delay(500);
    ser1.write(110);
    delay(500);
    lcd.clear();
    lcd.print("Alerta!!!Temp");
    lcd.setCursor(0,1);
    lcd.print("mayor a 38grad");
    delay(1800);
    }
    lcd.clear();
  }
  
  /*for(int c=0;c<tam1;c++){
  lcd.scrollDisplayLeft();
  delay(650);
  }*/
  /*
  lcd.clear();
  lcd.home();
  delay(300);
  lcd.print("Terminamos con");
  lcd.setCursor(0,1);
  lcd.print("las pantallas.");
  delay(2000);
  lcd.clear();
  lcd.print("ADIOS!! :D  ");
  lcd.setCursor(0,1);
  lcd.print("          Lucas. ");
  delay(2500);
*/


/*


void setup() {
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  
   
  
}*/
