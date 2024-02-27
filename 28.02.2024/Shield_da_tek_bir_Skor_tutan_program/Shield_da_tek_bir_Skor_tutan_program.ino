
//LCD ekranın 1. satırına "SKOR", 2. satırına ise sayacının değerini  yazdırınız.
//Sayıcının değeri UP tuşuna basarak artırılsın, DOWN tuşuna basılarak azaltılsın.
//Sayıcının değeri 0' ın  altına inmesin.

#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7

#define sag 0
#define ust 1
#define alt 2
#define sol 3
#define secim 4
#define yok 5

int skor=0,okunan;

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
  lcd.begin(16,2);
}
  
void loop()
{
  if(tus_oku()==ust)
  skor++;
  if(tus_oku()==alt and skor>=1) skor--;
  lcd.setCursor(0,0);
  lcd.print("SKOR");
  lcd.setCursor(0,1);
  lcd.print(skor);
  lcd.print(" ");
  delay(200);
}
