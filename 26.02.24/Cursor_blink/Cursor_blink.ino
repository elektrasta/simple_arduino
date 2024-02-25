#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7

void setup()
{
lcd.begin(16, 2); // LCD KÜTÜPHANESİ 2 SATIR 16 KARAKTER OLARAK BAŞLATILIYOR
}

void loop()
{
lcd.setCursor(0,0); // KURSOR O. SATIR O. KARAKTERE KONUMLANIYOR.
lcd.cursor(); // KURSOR GÖRÜNÜR YAPILIYOR
delay(3000);
lcd.noCursor(); // KURSOR GİZLENİYOR
delay(3000);
lcd.blink(); // KURSOR YANIP SÖNÜYOR
delay(3000);
lcd.noBlink(); // KURSOR SABİT
delay(3000);
}
