#define buton 7
#define led 8
boolean deger=LOW;
int sayac =1;

void setup() {
  pinMode(led,OUTPUT);
  digitalWrite(led,HIGH);
  pinMode(buton,INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(buton)==LOW)
  {
    while(digitalRead(buton)==LOW){};
    delay(100);
    Serial.print("Butona ");
    Serial.print(sayac++);
    Serial.println(" kez basıldı");
    digitalWrite(led,deger);
    deger=!deger;
    delay(200);
    }
}
