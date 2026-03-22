int kirmiziArac = 12;
int sariArac = 11;
int yesilArac = 10;

int kirmiziYaya = 9;
int yesilYaya = 8;

int buton = 7;

int arac []= {kirmiziArac, sariArac, yesilArac};
int yaya [] = {kirmiziYaya, yesilYaya};

bool yayaTalebi = false;

int bekleme = 5000; //standart kırmızı süresi
int ekSure = 10000; //yaya varsa kırmızı süresi




void setup() {
  for(int i =0 ; i<3;i++)
  {
    pinMode(arac[i],OUTPUT);

  }
   for(int i =0 ; i<2;i++)
  {
    pinMode(yaya[i],OUTPUT);
    
  }

  pinMode(buton,INPUT);
}

void loop() {
  // ARAÇ DUR - YAYA GEÇ
  digitalWrite(kirmiziArac,HIGH);
  digitalWrite(sariArac,LOW);
  digitalWrite(yesilArac,LOW);
  digitalWrite(yesilYaya,HIGH);
  
   if(yayaTalebi)
  {
    delay(ekSure);
    yayaTalebi = false;

  }
  else
  {
    delay(bekleme);
  }


  // ARAÇ HAZIRLAN - YAYA DUR
  
  digitalWrite(yesilYaya,LOW);
  digitalWrite(kirmiziYaya,HIGH);
  delay(500); // Yayaların durması için kısa bir emniyet payı

  digitalWrite(sariArac,HIGH);
  delay(1500);


  // ARAÇ GEÇ - YAYA DUR
  digitalWrite(kirmiziArac,LOW);
  digitalWrite(sariArac,LOW);
  digitalWrite(yesilArac,HIGH);


  //YEŞİL YANARKEN BUTONU KONTROL ET
  // delay(5000) kullanırsak o sırada butona basılsa da Arduino algılamaz.
  // Bu yüzden 5 saniyeyi 500 adet 10ms'lik parçaya bölüyoruz.

  for (int i = 0; i < 500; i++) {
    if (digitalRead(buton) == HIGH) { 
      yayaTalebi = true; 
    }
    delay(10); 
  }

  //DİKKAT
  digitalWrite(sariArac,HIGH);
  digitalWrite(yesilArac,LOW);
  delay(2000);
  digitalWrite(sariArac, LOW); // Bir sonraki döngü için sarıyı söndür

}
