#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7

void setup()
{
lcd.begin(16, 2); // LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
}
void loop()
{
lcd.setCursor(0,0);   // KURSOR O. SATIR O. KARAKTERE KONUMLANIYOR.
lcd.print("Ceyhun");   //KARAKTERLER YAZILIYOR
lcd.setCursor(0,1);   // KURSOR 1. SATIR O. KARAKTERE KONUMLANIYOR.
lcd.print("Dirilce");  // KARAKTERLER YAZILIYOR
delay(1000);          
lcd.clear();
delay(1000);
lcd.print("AKCAKOCA"); // KARAKTERLER YAZILIYOR
lcd.setCursor(6,1); // KURSOR 1. SATIR O. KARAKTERE KONUMLANIYOR.
lcd.print(" M.Y.O."); // KARAKTERLER YAZILIYOR
}
