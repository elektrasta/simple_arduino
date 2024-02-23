//yan yana yazma
char okunan;

void setup() {
  Serial.begin(9600);

}

void loop() {
  if(Serial.available())
  {
    okunan=Serial.read();
    Serial.print(okunan);
    Serial.print("\t");
    delay(1000);
    }
}
