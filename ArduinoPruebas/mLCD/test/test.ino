#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//                             adr,digits,line
LiquidCrystal_I2C lcd5(0x24, 16, 2);
LiquidCrystal_I2C lcd1(0x20, 16, 2);
LiquidCrystal_I2C lcd2(0x21, 16, 2);
LiquidCrystal_I2C lcd3(0x22, 16, 2);
LiquidCrystal_I2C lcd4(0x23, 16, 2);


void setup()
{
  lcd1.init();
  lcd1.backlight();
  lcd2.init();
  lcd2.backlight();
  lcd3.init();
  lcd3.backlight();
  lcd4.init();
  lcd4.backlight();
  lcd5.init();
  lcd5.backlight();
  lcd1.setCursor(0, 0);
  lcd1.print("DISPLAY 1");

  lcd2.setCursor(0, 0);
  lcd2.print("DISPLAY 2");

  lcd3.setCursor(0, 0);
  lcd3.print("DISPLAY 3");

  lcd4.setCursor(0, 0);
  lcd4.print("DISPLAY 4");

  lcd5.setCursor(0, 0);
  lcd5.print("DISPLAY 5");
  delay(1000);

  lcd1.clear();
  lcd2.clear();
  lcd3.clear();
  lcd4.clear();
  lcd5.clear();
}


void loop()
{
  lcd1.setCursor(0, 0);
  lcd1.print("Sek. seit Start");
  lcd1.setCursor(0, 1);
  lcd1.print(millis() / 1000);

  lcd2.setCursor(0, 0);
  lcd2.print("Getal 1");
  lcd2.setCursor(0, 1);
  lcd2.print("Getal 2");

  lcd3.setCursor(0, 0);
  lcd3.print("Getal 3");
  lcd3.setCursor(0, 1);
  lcd3.print(millis() / 1000);

  lcd4.setCursor(0, 0);
  lcd4.print("Getal 4");
  lcd4.setCursor(0, 1);
  lcd4.print(millis() / 1000);

  lcd5.setCursor(0, 0);
  lcd5.print("Getal 5");
  lcd5.setCursor(0, 1);
  lcd5.print(millis() / 1000);

}
