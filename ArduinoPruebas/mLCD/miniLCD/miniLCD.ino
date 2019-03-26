#include <LiquidCrystal_I2C.h> // Debe descargar la Libreria que controla el I2C
#include<Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2);

String msg1 = " HOLA A TODOS!!!";
String msg2 = " Con libreria LiquidCristalI2c ";
int tam1 = msg1.length();
int tam2 = msg2.length();

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
  //lcd.setCursor(0,0);
  lcd.print(msg1); //primer mensaje
  delay(2500);
  lcd.clear();
  lcd.print(" Mas pruebas!!");
  delay(1000);
}
void test(){
  lcd.clear();
}

void loop() { 
  
  lcd.clear();
  delay(800);
  lcd.print(" Esto es un LCD");
  delay(800);
  lcd.setCursor(0,1);
  lcd.print(msg2);
  delay(600);
  for(int c=0;c<tam1;c++){
  lcd.scrollDisplayLeft();
  delay(650);
  }
  
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
  
}
