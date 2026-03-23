# Arduino Potansiyometre ile Hız Kontrolü 
Bu proje, bir potansiyometreden gelen analog veriyi kullanarak bir LED'in yanıp sönme hızını (frekansını) gerçek zamanlı olarak ayarlar. map() fonksiyonu, potansiyometrenin 0-1023 arasındaki değerini, milisaniye cinsinden bir gecikme süresine dönüştürür.


### Devre Elemanları 
- 1 potansiyometre
- 1 kırmızı LED
- 220 Ohm'luk direnç


### KOD

```cqq
int led = 8;
int ayar = A0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  int deger=analogRead(ayar);
  int sonDeger = constrain(deger,0,1023);
  int ledSure = map(sonDeger,0,1023,0,2046); // 0-2 saniye arasında bir bekleme süresi
  digitalWrite(led,HIGH);
  delay(ledSure);
  digitalWrite(led,LOW);
  delay(ledSure);
}

```



https://github.com/user-attachments/assets/676b54d1-a00d-4842-ba72-5e9268179a5d



https://github.com/user-attachments/assets/39bab642-0caf-46ef-a78a-cc2549195568


