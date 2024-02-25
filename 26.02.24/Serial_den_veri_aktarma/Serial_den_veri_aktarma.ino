//bilgisayar dışında oluyor

#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7
char karakter[16];
int i=0;
void setup()
{
Serial.begin(9600);
lcd.begin(16, 2);
lcd.setCursor(0,0);
}

void loop()
{
  if (i<14)
{
  if (Serial.available()>0)
  {
    karakter[i]=Serial.read();
    lcd.setCursor(1,0);
    lcd.print(karakter[i]);
    i++;
  }
  if (i==14)
  {
    lcd.clear();
    i=0;   
  }
}
}
