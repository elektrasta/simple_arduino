#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7

#define sag 0
#define ust 1
#define alt 2
#define sol 3
#define secim 4
#define yok 5

int okunan=0;
int deger=6;
int c=0;
int sure=250;
int a=0;

// HANGİ TUŞA BASILDIĞINI GÖSTEREN FONKSİYON

int tus_oku()
{
okunan=analogRead(0);
if (okunan > 1000) return yok;
if (okunan <50) return sag;
if (okunan < 195) return ust;
if (okunan <380) return alt;
if (okunan < 555) return sol;
if (okunan < 790) return secim;
return yok;
}

void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print(" ****SAYICI**** "); //
  lcd.setCursor(0,1);
  lcd.print("****************");
  delay(2000);
  lcd.clear();
  pinMode(10,OUTPUT); //LCD ekran aydınlatması için pin 10 u çıkış olarak ayarla
  digitalWrite(10,HIGH);
}
  
void loop()
{
  deger=tus_oku();
  delay(sure);

  switch(deger)
  {
    case ust:
    a++;
    break;
    
    case alt:
    if(a>0)
    {
      a--;
    }
    break;

    case secim:
    a=0;
    break;
  }
  lcd.setCursor(0,0);
  lcd.print("SAYAC=");
  lcd.print(a);
  lcd.print(" "); //2 haneli rakamdan geri dönüş yaparken artık kalan 0 rakamı siler.
}
