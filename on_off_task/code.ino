int pb = 2;
int pbState = 0;
int led = 4;
int toggleNumber = 0;

void setup()
{
  pinMode(pb,INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
   if(digitalRead(pb)== HIGH){
    if(toggleNumber == 1){
       digitalWrite(led,0);
    }else{
       digitalWrite(led,1);
      
    }
   
  }   
}


