
int val;
int tempPin = 0;
int x;
void setup() {
  Serial.begin(9600);

}

void loop() {
  if ( x%5== 0){
    Serial.println(x);
  }
  val = analogRead(0);
  float mv = (val/1024.0)*5000.0;
  float cent = mv/10;
  Serial.println("Temperatura: "+String(cent));
  x=x+1;
  
  delay(500);
}
