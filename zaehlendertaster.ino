int knopf = 10;
int knopfstatus;
int x;
int i;
void setup()
{
  pinMode(knopf,INPUT_PULLUP);
  Serial.begin(9600);
 
 
}
void loop()
{
  knopfstatus = digitalRead(knopf);
  if(knopfstatus == 0){ Serial.println(x);
  x=x+1;
  delay(200);
  }             
}
