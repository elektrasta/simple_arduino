int okunan=0;
float volt=0; 

void setup()
{
Serial.begin(9600);
}


void loop() {
  okunan=analogRead(A1);

  Serial.print("okunan=");
  Serial.print(okunan);
  Serial.print(" volt=");
  Serial.print(volt);
  delay(500);
  

}
