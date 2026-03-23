# Arduino PWM ile Hassas Parlaklık Kontrolü

Bu proje, bir potansiyometre aracılığıyla LED'in ışık şiddetini (parlaklığını) PWM tekniği kullanarak kontrol etmeyi amaçlamaktadır.

### Devre Elemanları
- LED
- 220 Ohm direnç
- Potansiyometre


### KOD

- ~Neden LED için PWM Output kullanmalıyız?~
Standart bir dijital pin sadece iki durumu bilir: 5V (Açık) veya 0V (Kapalı). Eğer LED'i dijital pine bağlarsak, o LED ya %100 parlaklıkta yanar ya da tamamen söner.
Ortası (yani %50 parlaklık veya loş bir ışık) dijital bir pinde yoktur.
PWM, LED'i saniyede yaklaşık 500 ile 1000 kez açıp kapatır. Eğer LED zamanın %10'unda açık, %90'ında kapalı kalırsa, gözümüz bunu çok kısık bir ışık olarak görür. Eğer zamanın %90'ında açık, %10'unda kapalı kalırsa, bunu çok parlak olarak görür.
Gözümüz bu kadar hızlı bir açılıp kapanmayı (titremeyi) fark edemediği için, sanki voltaj düşürülmüş gibi bir yanılma yaşarız. 

```cqq
int led = 9;
int ayar = A0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  int deger=analogRead(ayar);
  Serial.print("deger :");
  Serial.println(deger);
  int sonDeger = constrain(deger,0,1023);
  int parlaklik = map(sonDeger,0,1023,0,255); 
  analogWrite(led,parlaklik);
}

```



<img width="984" height="435" alt="Ekran görüntüsü 2026-03-23 134229" src="https://github.com/user-attachments/assets/612e4e8a-b6bc-442e-8ced-4d33f3bf2574" />


https://github.com/user-attachments/assets/a48e2033-d099-4aac-ad52-9e4cbddf2337


