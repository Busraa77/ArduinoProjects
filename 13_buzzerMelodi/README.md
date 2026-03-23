# Pasif Buzzer ile Melodi Çalma Uygulaması

Melodi oluşturmak için tone(pin,frekans) komutu gereklidir. Bu komut, seçilen pin, çok hızlı bir şekilde açıp kapatabilen özel bir zamanlayıcı kullanır. Buzzer'da melodi 0 ve 1'in ne kadar hızlı değiştiğiyle ilgili olduğundan tone() ile melodiler oluşturabiliriz.


### KOD

```cqq

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


```

<img width="266" height="201" alt="Ekran görüntüsü 2026-03-23 142621" src="https://github.com/user-attachments/assets/ba6a74bf-40b2-44bf-a7c4-24307d67d3e6" />

