#include <LiquidCrystal.h> // KÜTÜPHANE DOSYASI EKLENDİ
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // RS, En, D4, D5, D6, D7

byte zil[8]={0,4,14,14,31,4,0,0};
byte kalp[8]= {0,10,21,17,10,4,0,0};
byte gulen [8]={0,0,10,0,17,14,0,0};
byte somurtan [8]={0,0,10,0,14,17,0,0};

void setup()
{
  lcd.begin(16, 2);
  lcd.createChar(0,zil);
  lcd.createChar(1,kalp);
  lcd.createChar(2,gulen);
  lcd.createChar(3,somurtan);
}
  
void loop()
{
  lcd.setCursor(0,0);
  for(int i=0;i<4;i++)
  {
    lcd.write(byte (i));
    delay(1000);
  }
  lcd.clear();
  delay(1000);
}
