const int pbuzzer = 7;

int cuarta = 1000/4; 
int octava = 1000/8;
int media = 1000/2;
int trescuartos = 750;
double pausa = 1.3; //pausar 30% de la nota

//min Frecuencia 31Hz ---- max Frecuencia 65,525Hz
int c4 = 262;//Hz
int LA = 440;
int e5 = 659;

int Do = 262;
int Re = 293;
int Mi = 330;
int Fa = 349;
int Sol = 392;
int La = 440;
int Si = 494;
int Do_ = 523;//?
int Re_ = 311;//?

void setup() {
  // put your setup code here, to run once:
  pinMode(pbuzzer,OUTPUT);
}

void test(){
  for(int i = 3000;i<65000;i++){
    tone(pbuzzer,i,octava);
    delay(10);
  }
}
void loop() {//si el delay es menor a la nota no se escuchara correctamente.
  
  tone(pbuzzer, Do, 300); delay(300);
  
  tone(pbuzzer, Do, 300);delay(300);

  tone(pbuzzer, Re, 500);delay(500);

  tone(pbuzzer, Do, 500);delay(500);

  tone(pbuzzer, Fa, 1000);delay(500);

  tone(pbuzzer, Mi, 1000);delay(1000);

  tone(pbuzzer, Do, 300);delay(300);

  tone(pbuzzer, Do, 300);delay(300);

  tone(pbuzzer, Re, media);delay(500);

  tone(pbuzzer, Do, media);delay(500);

  tone(pbuzzer, Sol, 600);delay(600);

  tone(pbuzzer, Fa, 800);delay(800);

  tone(pbuzzer, Do, media);delay(300);

  tone(pbuzzer, Do, media);delay(300);

  tone(pbuzzer, Do_, 600);delay(600);

  tone(pbuzzer, La, media);delay(400);

  tone(pbuzzer, Fa, media);delay(400);

  tone(pbuzzer, Mi, media);delay(400);

  tone(pbuzzer, Re, cuarta);delay(400);

  tone(pbuzzer, Fa, media);delay(300);

  tone(pbuzzer, Mi, media);delay(300);

  tone(pbuzzer, Re, media);delay(500);

  tone(pbuzzer, Do, cuarta);delay(500);

  tone(pbuzzer, Re, cuarta);delay(300);

  tone(pbuzzer, Do, media);delay(500);

  delay(5000);

  
}
