String girilen;
void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.print("yesil icin y sari icin s ikisi icin i bas");

}

void loop() {
 if(Serial.available()){
    girilen=Serial.readString();
    Serial.println(girilen);
    if(girilen=="y"){
       Serial.println("YESİL YANDİ");
       digitalWrite(3,1);
       delay(3000);
       digitalWrite(3,0);
      }
       if(girilen=="s"){
       Serial.println("SARİ YANDİ");
       digitalWrite(4,1);
       delay(3000);
       digitalWrite(4,0);
      }
      if(girilen=="i"){
       Serial.println("İKİSİ YANDİ");
       digitalWrite(3,1);
       digitalWrite(4,1);
       delay(3000);
       digitalWrite(3,0); 
       digitalWrite(4,0);
       
      }
  }

}
