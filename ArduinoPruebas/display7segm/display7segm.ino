int led = 13;
int led1 = 12;
int led2 = 11; 
int led3 = 10;
int led4 = 9;
int led5 = 8;
int led6 = 7; 
int milisegundo = 100;
int segundo = 1000;

void a(){
  digitalWrite(led,HIGH); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
   
}
void b(){
  digitalWrite(led,LOW); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
   
}
void c(){
  digitalWrite(led,LOW); 
  digitalWrite(led1, LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  
}
void d(){
  digitalWrite(led,HIGH); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  
}
void e(){
  digitalWrite(led,LOW); 
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
 
}
void f(){
  digitalWrite(led,LOW); 
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  
}
void g(){
  digitalWrite(led,LOW); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  
}
void h(){
  digitalWrite(led,HIGH); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  
}
void i(){
  digitalWrite(led,LOW); 
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
 
}
void j(){
  digitalWrite(led,HIGH); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
}
void l(){
  digitalWrite(led,LOW); 
  digitalWrite(led1, LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
}
void n(){
digitalWrite(led,LOW); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH); 
}
void o(){
digitalWrite(led,HIGH); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
}
void p(){
digitalWrite(led,HIGH); 
  digitalWrite(led1, LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
}
void s(){
digitalWrite(led,LOW); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
}
void t(){
digitalWrite(led,LOW); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
}
void u(){
digitalWrite(led,HIGH); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
}
void cero(){
digitalWrite(led,HIGH); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
}
void uno(){
 digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
}
void dos(){
digitalWrite(led,HIGH); 
  digitalWrite(led1, LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH); 
}
void tres(){
   digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW); 
}
void cuatro(){
digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
}
void cinco(){
digitalWrite(led,LOW); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW); 
}
void seis(){
digitalWrite(led,LOW); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
}
void siete(){
   digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
}
void ocho(){
 digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
}
void nueve(){
digitalWrite(led,HIGH); 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
}

void test(int tim){
  cero();delay(tim); uno();delay(tim);dos();delay(tim);tres();delay(tim);cuatro();delay(tim);
  cinco();delay(tim);seis();delay(tim);siete();delay(tim);ocho();delay(tim);nueve();delay(tim);
  a();delay(tim);b();delay(tim);c();delay(tim);d();delay(tim);e();delay(tim);f();delay(tim);
  g();delay(tim);h();delay(tim);i();delay(tim);j();delay(tim);l();delay(tim);n();delay(tim);
  o();delay(tim);delay(tim);p();delay(tim);s();delay(tim);u();
}

void tilt(){
  for( int i = 0; i < 3; i++){
    digitalWrite(led,LOW); 
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    delay(100);
    digitalWrite(led,LOW); 
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
    delay(200);
  }
}

void risaCorta(){
  for ( int i = 1; i < 4; i++){
    j();delay(500);a();delay(500);j();delay(500);a();delay(500);
  }
}

void hola(){
   h();delay(segundo);o();delay(segundo);l();delay(segundo);a();
 delay(segundo);
}

void chau(){
  c();delay(segundo);h();delay(segundo);a();delay(segundo);u();delay(segundo);
}
 

void setup()
{ pinMode(led, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT); 
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT); } 

void loop() {
  //TEST
 test(milisegundo);
 test(milisegundo*2);
 tilt();
 hola();
 tilt();
 risaCorta();
 chau();
 tilt();
 chau();
 tilt();
 tilt();
 
 
  
  
  
}
