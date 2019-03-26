/*Codigo que devuelve el valor del 
boton presionado en un control remoto(especifico del control de keila)

En la consola veremos los valores*/

#include <LiquidCrystal_I2C.h> // Debe descargar la Libreria que controla el I2C
#include<Wire.h>
#include <IRremote.h>

LiquidCrystal_I2C lcd(0x27,16,2);
int RECV_PIN = 13;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  // In case the interrupt driver crashes on setup, give a clue
  // to the user what's going on.
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");

  //LCD
    lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" Enabling IR in");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print(" Enabled IR in");
  delay(1000);
  lcd.clear();
 
}
String codigos(String Cadena){
  String respuesta = "";
  if (Cadena == "49284"){  respuesta = "Uno";  }
  if (Cadena == "49220"){  respuesta = "Dos";  }
  if (Cadena == "49348"){  respuesta = "Tres";  }
  if (Cadena == "49188"){  respuesta = "Cuatro";  }
  if (Cadena == "49316"){  respuesta = "Cinco";  }
  if (Cadena == "49252"){  respuesta = "Seis";  }
  if (Cadena == "49380"){  respuesta = "Siete";  }
  if (Cadena == "49172"){  respuesta = "Ocho";  }
  if (Cadena == "49300"){  respuesta = "Nueve";  }
  if (Cadena == "49156"){  respuesta = "Cero";  }
  if (Cadena == "49176"){  respuesta = "Canal -";  }
  if (Cadena == "49304"){  respuesta = "Canal +";  }
  if (Cadena == "49400"){  respuesta = "Vol -";  }
  if (Cadena == "49272"){  respuesta = "Vol +";  }
  if (Cadena == "49384"){  respuesta = "POWER on/off";  }
  if (Cadena == "49352"){  respuesta = "Tv/AV";  }
  if (Cadena == "49214"){  respuesta = "Menu";  }
  //if (Cadena == ""){  respuesta = "Pausa";  }
  //if (Cadena == ""){  respuesta = "Play";  }
  return respuesta;
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
  String Senial;
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    Senial = String(results.value, HEX);
    Senial.toUpperCase();
    irrecv.resume(); // Receive the next value
    Senial = codigosMiniRemote(Senial);
    Serial.println(Senial);
    lcd.print(Senial);
    delay(500);
    lcd.clear();
  }
  delay(70);
}
