void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  for(int l=9; l<=13; l++){
    digitalWrite(l,HIGH);
    delay(100);
    digitalWrite(l,LOW);
  }
}
 
