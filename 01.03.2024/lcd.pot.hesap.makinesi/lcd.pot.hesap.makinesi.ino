#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

int sure=500;
int okunan=0;
int deger=0;
int durum=0;
int yuzde=0;
int sayi1=0;
int sayi2=0;

# define sag 0
# define ust 1
# define alt 2
# define sol 3
# define secim 4
# define yok 5
int tus_oku()
{
  okunan=analogRead(0);
  if(okunan > 1000) return yok;
  if(okunan < 50) return sag;
  if(okunan < 195) return ust;
  if(okunan < 380) return alt;
  if(okunan < 555) return sol;
  if(okunan < 790) return secim;
  return yok;
}

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("     ANALOG");
  lcd.setCursor(0,1);
  lcd.print("   HESAP MAKINESI");
  delay(3000);
  lcd.clear();
}

void loop() {

  do
  {
    deger=analogRead(A1);
    yuzde=map(deger,0,1023,0,100);
    lcd.setCursor(0,0);
    lcd.print("1.SAYIYI GIRINIZ");
    lcd.setCursor(0,1);
    lcd.print(yuzde);
    lcd.print(" ");
    sayi1=yuzde;
  }
  while(tus_oku ()!=secim);
   delay(sure);

    do
    {
     deger=analogRead(A1);
    yuzde=map(deger,0,1023,0,100);
    lcd.setCursor(0,0);
    lcd.print("2.SAYIYI GIRINIZ");
    lcd.setCursor(0,1);
    lcd.print(yuzde);
    lcd.print(" ");
    sayi2=yuzde;
    }
    while(tus_oku ()!=secim);
    delay(sure);

    do
    {
    lcd.setCursor(0,0);
    lcd.print("TOPLAMLARI:   ");
    lcd.setCursor(0,1);
    lcd.print(sayi1+sayi2);
    delay(2000);
    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("FARKLARI:   ");
    lcd.setCursor(0,1);
    lcd.print(sayi1-sayi2);
    delay(2000);
    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("CARPIMLARI:   ");
    lcd.setCursor(0,1);
    lcd.print(sayi1*sayi2);
    delay(2000);
    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("BOLUMLERI:   ");
    lcd.setCursor(0,1);
    lcd.print(sayi1/sayi2);
    delay(2000);
    lcd.clear();
    }
    while(tus_oku ()!=secim);
    delay(sure);
  
}
