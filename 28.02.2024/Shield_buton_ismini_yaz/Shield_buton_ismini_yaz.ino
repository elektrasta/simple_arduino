#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7

int okunan=0;
int tus=0;

#define sag 0
#define ust 1
#define alt 2
#define sol 3
#define secim 4
#define yok 5

// Tuş oku Fonksiyonu
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
  lcd.print("******AKMYO***");  // İlk satıra okulun ismini yaz
  pinMode(10,OUTPUT);           //LCD ekran aydınlatması için pin 10 u çıkış olarak ayarla
  digitalWrite(10, HIGH);
  delay(500);
  lcd.clear();
}
  
void loop()
{
  digitalWrite(10,HIGH);
  lcd.setCursor(0,1);
  tus=tus_oku();
  switch(tus)
  {
    case sag:
    {
    lcd.print("RIGHT  ");
    break;
    }
    case sol:
    {
    lcd.print("LEFT  ");
    break;
    }
    case ust:
    {
    lcd.print("UP  ");
    break;
    }
    case alt:
    {
    lcd.print("DOWN  ");
    break;
    }
    case secim:
    {
    lcd.print("SELECT");
    digitalWrite(10,LOW);
    delay(1000);
    break;
    }
    case yok:
    {
    lcd.print("NONE  ");
    break;
    }
  }
}
