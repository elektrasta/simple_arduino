
int okunan;
int sure;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available());
  {
    while(Serial.available())
    {
    okunan=Serial.read();
    sure=sure*10+(okunan-48);
    Serial.println(sure);
    Serial.println(sure*15);
    Serial.println(sure/500);
    }
  }

}
