int kirmizi=2;
int beyaz= 3;
void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(beyaz, OUTPUT);
}

void loop()
{
  digitalWrite(kirmizi, 1);
  digitalWrite(beyaz, 0);
  delay(2000); 
  digitalWrite(kirmizi, 0);
  digitalWrite(beyaz, 1);
  delay(1000); 
}
