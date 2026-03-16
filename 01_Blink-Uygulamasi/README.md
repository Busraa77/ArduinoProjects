# Arduino LED Kontrol Projesi (Blink)

Proje giriş seviyesinde basit bir LED yakma ve söndürme uygulamasıdır. Uygulama sırayla her saniye yanma veya sönme işlemi yapan bir LED döngüsü oluşturmayı hedeflemektedir.

### *Kullanılan Devre Elemanları*
1. Kırmızı LED
2. LED ile birlikte koruma direnci olarak kullanılan 330 Ohm'luk direnç


### Devre Bağlantısı
* LED'in **Anot (+)** ucu, **330 Ohm** direnç üzerinden mikrodenetleyicinin **IO13** (Pin 13) numaralı pinine bağlanmıştır.
  
  Bu projede kullanılan IO13 pini, Arduino geliştirme kartları üzerinde özel bir öneme sahiptir. Bu pin, kartın üzerinde fiziksel olarak bulunan ve genellikle "L" harfi ile işaretlenmiş olan dahili bir LED'e bağlıdır.
  Kod içerisinde 13 numaralı pine HIGH sinyali gönderildiğinde, hem devreye harici olarak bağladığımız kırmızı LED hem de kart üzerindeki dahili "L" LED'i aynı anda yanacaktır. Bu durum, dışarıya bir LED bağlamadan dahi kodun çalışıp çalışmadığını test etmemize olanak tanır. Bu yüzden iyi bir başlangıç projesidir.
  
* LED'in **Katot (-)** ucu ise devrenin **GND** (Toprak) hattına bağlanarak devre tamamlanmıştır.




https://github.com/user-attachments/assets/9a6293b3-b0ef-4620-992f-45ceb34fc08a


