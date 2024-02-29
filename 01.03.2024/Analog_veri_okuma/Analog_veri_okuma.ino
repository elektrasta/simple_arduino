int deger=0;

void setup()
{
Serial.begin(9600);
}
void loop()
{
deger=analogRead(A1); //AO dan voltajı okuyoruz (0-1023) ve bir int değişkene aktarıyoruz.
Serial.println(deger);
delay(1000);
}
