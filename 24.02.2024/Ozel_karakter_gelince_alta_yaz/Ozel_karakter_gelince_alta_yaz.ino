//cümlenin içinde q varsa alta geçecek
char okunan;

void setup() {
  Serial.begin(9600);
}

void loop() {
  while(Serial.available() == 0){}
  delay(1);
  while(Serial.available())
  {
      okunan = Serial.read();
      Serial.print(okunan);
      if(okunan == 'q') Serial.println(" *");
  }
}
