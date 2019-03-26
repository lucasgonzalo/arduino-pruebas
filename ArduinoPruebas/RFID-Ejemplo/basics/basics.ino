#include <SPI.h>
#include <MFRC522.h>

MFRC522 mfrc522(10, 9);

void setup()
{
Serial.begin(9600);
SPI.begin();
mfrc522.PCD_Init();
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
}

void loop()
{
//here we have to wait for the card, when it is near to the sensor
if ( ! mfrc522.PICC_IsNewCardPresent()){
return;
}
//we can read it's value
if ( ! mfrc522.PICC_ReadCardSerial()) {
return;
}
 
Serial.print("Tag:");
String content= "";
for (byte i = 0; i < mfrc522.uid.size; i++) {
Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
Serial.print(mfrc522.uid.uidByte[i], HEX);
content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
content.concat(String(mfrc522.uid.uidByte[i], HEX));
}
content.toUpperCase();
content = content.substring(1);
//lavero,saeta,
if((content == "A0 29 B1 63")||(content == "04 76 93 DA")) {
 digitalWrite(8, HIGH);
 delay(2000);
digitalWrite(8, LOW);
}else{
digitalWrite(7, HIGH);
delay(2000);
digitalWrite(7, LOW);
}
Serial.println();
}
