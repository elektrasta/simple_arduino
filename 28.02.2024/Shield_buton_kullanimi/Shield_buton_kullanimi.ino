#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7

int okunan=0;
int deger=0;

#define sag 0
#define ust 1
#define alt 2
#define sol 3
#define secim 4
#define yok 5

// Tuş oku Fonksiyonu
int tus_oku ()
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
  lcd.begin(16,2);
  lcd.clear();
}
void loop()
{
  lcd.setCursor(0,0);
  lcd.print("BASILAN TUS");
  lcd.setCursor(0,1);
  deger=tus_oku();
  lcd.print(deger);
}
