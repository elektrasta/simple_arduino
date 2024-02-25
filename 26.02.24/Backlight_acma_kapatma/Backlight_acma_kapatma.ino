#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7

void setup()
{
lcd.begin(16, 2); // LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
pinMode(10,OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  lcd.setCursor(0,0);
  lcd.print("CEYHUN");
  delay(2000);
  digitalWrite(10,LOW);
  delay(2000);
}
