void setup()
{
  int x;
  Serial.begin(9600);
  randomSeed(analogRead(A1));
  x=random(1,7);
  if(x==6)
  {
   Serial.println("Cool du hast eine 6 gewuerfelt");
   Serial.println(" Willst du nochmal wuerfeln?");
  }
  else
  {Serial.println(x);
  }
}

void loop()
{
 
}
