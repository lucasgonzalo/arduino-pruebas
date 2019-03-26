/*Codigo que carga el valor inicial para el reloj, este archivo se debe cargar dos veces
primero para setear la hora con la del sistema y luego con esa linea comentada*/


// muchos problemas, es posible que el modulo(DS1302) este malo. no tiene capacitor?.


#include <LiquidCrystal_I2C.h> // Debe descargar la Libreria que controla el I2C
#include<Wire.h>
#include <IRremote.h>
#include "RTClib.h"

//RTC_DS1307 RTC;
RTC_Millis RTC;

LiquidCrystal_I2C lcd(0x27,16,2);
int RECV_PIN = 13;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
//IR
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
// reloj
  Wire.begin();
 // RTC.begin();
 RTC.adjust(DateTime(F(__DATE__), F(__TIME__)));// esta linea se debe comentar en la segunda carga
  //RTC.adjust(RTC.now());
//LCD
   lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" Iniciando..");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print(" Listo.");
  delay(300);
  lcd.clear();
}
String codigosMiniRemote(String Cadena){
  String respuesta = "";
  if (Cadena == "FF30CF"){  respuesta = "Uno";  }
  if (Cadena == "FF18E7"){  respuesta = "Dos";  }
  if (Cadena == "FF7A85"){  respuesta = "Tres";  }
  if (Cadena == "FF10EF"){  respuesta = "Cuatro";  }
  if (Cadena == "FF38C7"){  respuesta = "Cinco";  }
  if (Cadena == "FF5AA5"){  respuesta = "Seis";  }
  if (Cadena == "FF42BD"){  respuesta = "Siete";  }
  if (Cadena == "FF4AB5"){  respuesta = "Ocho";  }
  if (Cadena == "FF52AD"){  respuesta = "Nueve";  }
  if (Cadena == "FF6897"){  respuesta = "Cero";  }
  if (Cadena == "FFA25D"){  respuesta = "Canal -";  }
  if (Cadena == "FFE21D"){  respuesta = "Canal +";  }
  if (Cadena == "FFE01F"){  respuesta = "Vol -";  }
  if (Cadena == "FFA857"){  respuesta = "Vol +";  }
  if (Cadena == "FF22DD"){  respuesta = "Prev";  }
  if (Cadena == "FF02FD"){  respuesta = "Next";  }
  if (Cadena == "FF629D"){  respuesta = "Canal";  }
  if (Cadena == "FF906F"){  respuesta = "Ecualizador";  }
  if (Cadena == "FF9867"){  respuesta = "100+";  }
  if (Cadena == "FFC23D"){  respuesta = "PLAY/Pausa";  }
  if (Cadena == "FFB04F"){  respuesta = "200+";  }
  return respuesta;
}

void loop() {
  //String Senial;
  //if (irrecv.decode(&results)) {
  //  Serial.println(results.value, HEX);
  //  Senial = String(results.value, HEX);
  //  Senial.toUpperCase();
  //  irrecv.resume(); // Receive the next value
  //  Senial = codigosMiniRemote(Senial);
  //  Serial.println(Senial);
  //  lcd.print(Senial);
  //  delay(500);
  //  lcd.clear();

    DateTime now = RTC.now();
  
    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.print(' ');
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();
    //Serial.print(" seconds since 1970: ");
    //Serial.println(now.unixtime());
    Serial.println();
    delay(500);
    lcd.print(String(now.hour())+":"+String(now.minute())+":"+String(now.second()));
    delay(500);
    lcd.clear();
  
  delay(70);
}
