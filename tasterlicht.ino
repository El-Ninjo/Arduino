int knopf = 4;
int led = 9;
int knopfstatus;
void setup() {
  pinMode(knopf,INPUT_PULLUP);
  pinMode(led,OUTPUT);

  }

void loop() {
  knopfstatus = digitalRead(knopf);
  
  
  if(knopfstatus == 0){
    digitalWrite(led,HIGH);
  }
    else{digitalWrite(led,LOW);
        }  
  
  
 

}
