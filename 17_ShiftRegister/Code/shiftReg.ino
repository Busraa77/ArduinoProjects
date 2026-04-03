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













