

#define do_ 261
#define re 294
#define mi 329
#define fa 349
#define sol 392
#define la 440
#define si 493
#define doo 523

#define buzzerPin 11
int nota[] = {do_,re,mi,fa,sol,la,si,doo};

void setup() {
  pinMode(buzzerPin,OUTPUT);
}

void loop() {
  for(int i=0;i<5;i++)
  {
    tone(buzzerPin,nota[i]);
    delay(1000);
  }
}
