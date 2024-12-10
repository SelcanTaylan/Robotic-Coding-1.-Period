void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
}

void loop()
{
  if(digitalRead(4)==1)
  {
    digitalWrite(2, 1);
    digitalWrite(3, 0);
  }
  else
  {
    digitalWrite(2, 0);
    digitalWrite(3, 1);
  }
}
