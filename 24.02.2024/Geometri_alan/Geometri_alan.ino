char okunan [5];
int i;

void setup() {
  Serial.begin(9600);

}

void loop() {
  while(Serial.available()==0){i=0;}
  delay(1);
  while(Serial.available())
  {
    if(i<5)
    {
      okunan[i]=Serial.read();
      Serial.print(okunan[i]);
      i++;
    }
    else{i=0;}
    }
    delay(50);
    Serial.println();
    switch(okunan[0])
    {
      case 'u':Serial.println("ALAN ucgen"); break;
      case 'd':Serial.println("ALAN dikdörtgen"); break;
      case 'k':Serial.println("ALAN kare"); break;
    }
}
