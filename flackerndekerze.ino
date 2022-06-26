int x;
void setup()
{
  pinMode(9, OUTPUT);
  randomSeed(analogRead(A1));
}

void loop(){
 x=random(1,255);
 analogWrite(9,x);
 delay(50);
}
