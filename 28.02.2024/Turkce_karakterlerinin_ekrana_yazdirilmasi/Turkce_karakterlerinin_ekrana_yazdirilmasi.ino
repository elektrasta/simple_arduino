#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7

byte c_harfi[]={0,14,17,16,17,14,4,0};// Ç
byte g_harfi[]={14,0,14,17,15,1,14,0};// Ğ
byte o_harfi[]={0,10,0,14,17,17,14,0};// Ö

void setup()
{
  pinMode(10,OUTPUT);       // BACK-LIGHT'I AÇ
  digitalWrite(10, HIGH);   // Arka ışığı aç
  lcd.begin(16, 2);         // LCD TANIMLAMASINI YAPIYORUZ
  lcd.createChar(0,c_harfi);// LCD nin ram adreslerine, tanımladığımız özel karakterleri atıyoruz
  lcd.createChar(1,g_harfi);
  lcd.createChar(2,o_harfi);
}
  
void loop()
{
  lcd.setCursor(5,1);
  lcd.write(byte(0));   // ç yazıyoruz
  delay (1000);
  lcd.setCursor(6,1);
  lcd.write(byte (1));  // ğ yazıyoruz
  delay (1000);
  lcd.setCursor(7,1);
  lcd.write(byte(2));   // ö yazıyoruz
  delay (1000);
}
