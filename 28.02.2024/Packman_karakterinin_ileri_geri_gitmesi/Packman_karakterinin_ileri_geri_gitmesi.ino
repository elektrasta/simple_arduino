#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7

byte acik_agiz[]={0,0,14,20,24,28,14,0};    //packman açık ağız
byte kapali_agiz[]={0,0,14,27,31,31,14,0};  //packman kapalı ağız

void setup()
{
  pinMode(10,OUTPUT);     // BACK-LIGHT'I AÇ
  analogWrite(10,130);    //lcd back-light açık
  lcd.begin(16, 2);       // LCD TANIMLAMASINI YAPIYORUZ
  
  // LCD nin ram adreslerine, tanımladığımız özel karakterleri atıyoruz
  lcd.createChar(0,acik_agiz);
  lcd.createChar(1,kapali_agiz);
}
  
void loop()
{
  for(int i=0;i<16;i++)
  {
    lcd.setCursor(i,0);
    lcd.write(byte(0));
    delay(200);
    lcd.setCursor(0,0);
    lcd.write(byte (1));
    delay(200);
    lcd.setCursor(i, 0);
    lcd.print(" ");
  }
  for (int i=16;i>0; i--)
  {
    lcd.setCursor(i,0);
    lcd.write(byte(0));
    delay(200);
    lcd.setCursor(i,0);
    lcd.write(byte (1));
    delay(200);
    lcd.setCursor(i,0);
    lcd.print(" ");
  }
}
