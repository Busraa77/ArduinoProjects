# Potansiyometre ile Analog Veri Okuma

Bu projenin amacı potansiyometre kullanımını öğrenmektir. Potansiyometrenin breadboard üzerindeki bağlantılarını yapacağız ve kolun çevrimiyle gerçekleşen voltaj değişimini ölçeceğiz.

### Devre Kurulumu

Potansiyometre, temel olarak bir gerilim bölücü (voltage divider) mantığıyla çalışır. Üç bacağı bulunan bu bileşenin bağlantıları şu şekildedir:

* 1.Bacak: GND (Toprak) hattına bağlanır.

* 2.Bacak (Orta): Arduino'nun Analog pinine (Örn: A2) bağlanır. Voltajın okunduğu "sinyal" ucudur.

* 3.Bacak: VCC (+5V) hattına bağlanır.

Potansiyometrenin kolu çevrilerek orta bacağın direnç yolu üzerindeki mesafesi değişir, direnç ayarlanabilir.
Potansiyometreden ölçülen ham değer 0 ile 1023 arasındadır. Arduino, analog pininden okuduğu voltajı doğrudan Volt olarak değil, 0 ile 1023 arasında bir ham değer (Raw Value) olarak verir. Bunun sebebi, işlemcinin voltaj ölçümü için 10 bitlik bir Analog-Dijital Dönüştürücü (ADC) birimi kullanmasıdır ($2^{10} = 1024$ basamak).

<img width="1024" height="529" alt="image" src="https://github.com/user-attachments/assets/fc558d07-0829-4b68-9882-4ae542819c73" />







https://github.com/user-attachments/assets/04add567-b2fd-4a5c-9e7b-837c21d2024e


