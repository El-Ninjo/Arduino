void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  for(int p=50; p<=500; p++){
   tone(13,p); 
    delay(20);
  }
    for (int p=500; p>=50; p--){
      tone(13,p);
      delay(20);
    }
}
 
