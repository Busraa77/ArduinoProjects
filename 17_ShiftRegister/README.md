# 74HC595 ENTEGRE İLE BINARY SAYAÇ

14.projede yaptığımız gibi 8 bitlik binary sayaç oluşturacağız. Ancak bu projede farklı olarak shift register 74HC595 kullanılacaktır. Bu entegrenin amacı kullanılan pin sayısından tasarruf etmektir. Önceki projemizde her LED için bir pin bağlamamız yani 8 pin kullanmamız gerekirken bu projede 3 pin ile aynı işi yapacağız.

### Devre Kurulumu
- 1 adet 74HC595 entegre
- 8 adet kırmızı LED
- 8 adet 220 Ohm'luk koruyucu direnç


Shift register’da 2 aşama vardır: 1-Veri doldurma (arka planda) ile bitler tek tek içeri girer,LED’lere henüz yansımaz. 2-Latch ile gösterme: hepsi bir anda çıkışa verilir.

- LATCH, gönderilen veriyi çıkışa aynı anda veren mekanizmadır. --> pin12 ST_CP
- DATA, gönderilen veri (1 ve 0).  --> pin14 DS
- CLOCK, veriyi ne zaman kaydedeceğini söyleyen sinyal.  --> pin11 SH_CP

- MR (pin 10) :VCC
- OE (pin 13) :GND
  

<img width="387" height="408" alt="image" src="https://github.com/user-attachments/assets/a0cb45dc-6d81-4304-bf37-736da64116d4" />

### KOD
```
int latch =11;
int clock=12;
int data=8;

void shiftOutByte(byte dataOut)
{
boolean pinState;
digitalWrite(data,LOW);
digitalWrite(clock,LOW); //clock’ın başlangıçta 0 olması lazım. çünkü veri LOW → HIGH geçişinde okunur

for(byte i=0;i<8;i++)
{
  digitalWrite(clock,LOW);
   // bit kontrolü
    if (dataOut & (1 << (7-i))) {
      pinState = HIGH;
    } else {
      pinState = LOW;
    }

    digitalWrite(data, pinState); // biti gönder
    digitalWrite(clock, HIGH);    // clock ile kaydet
  }
  digitalWrite(clock, LOW);

}

void setup() {
  pinMode(latch,OUTPUT);
  pinMode(clock,OUTPUT);
  pinMode(data,OUTPUT);
}

void loop() {
  for(byte i=0;i<256;i++)
  {
    digitalWrite(latch,LOW);
    shiftOutByte(i);
    digitalWrite(latch,HIGH);
    delay(1000);
  }
}


```



https://github.com/user-attachments/assets/345fae2c-c22e-4495-9da6-8203c7fddf06

