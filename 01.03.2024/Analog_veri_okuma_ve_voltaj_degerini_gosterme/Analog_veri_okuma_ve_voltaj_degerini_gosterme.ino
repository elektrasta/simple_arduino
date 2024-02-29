int deger=0; float voltaj=0; 

void setup()
{
Serial.begin(9600);
}

void loop()
{
deger=analogRead(A1);
voltaj=deger*0.0048828; //Okunan değer adım voltajı ile çarpılarak Voltaj değeri bulunuyor
Serial.print(deger);
Serial.print(" degeri ");
Serial.print(voltaj);
Serial.println(" volta esittir");
delay(1000);
}
