//alt alta yazma
char okunan;

void setup() {
  Serial.begin(9600);
}

void loop() {
  while(Serial.available() == 0){}
  delay(100);
  while(Serial.available())
  {
      okunan = Serial.read();
      Serial.print(okunan);
  }
    Serial.println(" *");
}
