# ARDUİNO S.O.S MORSE KODU ÜRETECİ

SOS Morse kodu, acil yardım çağrısı olarak kullanılan uluslararası standart bir tehlike sinyalidir.
SOS, Mors alfabesinde üç kısa nokta(S), üç uzun çizgi(O) ve üç kısa nokta(S) sinyalini ifade eder. 
Bu projenin amacı bu kodu bir LED ile üretmek ve kodumuzda modüler yapı kullanmaktır.


### Devre Elemanları
- Kırmızı LED
- 220 Ohm'luk koruyucu direnç


### Devre Kurulumu

Yalnızca basit LED bağlantısı yapılacak. LED'in bir ucu pin 10'a bağlandı, diğer ucu ise dirençte. Direncin diğer ucu ise GND'ye bağlandı.


- 3 kısa sinyal(Nokta- Dit)                    :  Her biri 150ms sürecek.
- 3 uzun sinyal(Çizgi- Dah)                    :  Her biri 400ms sürecek.
- Her bir sinyal arası(Harf sonrası sessizlik) :  100 ms sürecek.
- Her bir harf arası boşluk                    :  300 ms sürecek.
- Her bir SOS sonu bekleme                     :  500 ms sürecek.


### KOD

```cpp

int ledPins = 10;

void setup() {
  pinMode(ledPins, OUTPUT);
}

void S() {
  for (int x = 0; x < 3; x++) {
    digitalWrite(ledPins, HIGH);
    delay(150);
    digitalWrite(ledPins, LOW);
    delay(100);
  }
}
void loop() {
  
  S();
  delay(300);


  for (int x = 0; x < 3; x++) {
    digitalWrite(ledPins, HIGH);
    delay(400);
    digitalWrite(ledPins, LOW);
    delay(100);
  }
  delay(300);

  S();
  delay(5000);  // Diğer SOS sinyalinden önce 5 saniye bekle.
}

```


kodda 'S' harfi 2 kez tekrar ettiği için ayrı ayrı 2 for döngüsünü yazmak yerine bu for döngüsünü bir metot içinde toplayıp gereken yerde kullanarak kodu modüler hale getirdim.



https://github.com/user-attachments/assets/15fc9ca8-6383-4759-8935-c779cb938dac





https://github.com/user-attachments/assets/62de0a08-d87f-4e91-a16f-9cc3b6770a40


