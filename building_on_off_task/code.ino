int isHigh = false;

// Input Pins

int inputPinTwo = 2;
int inputPinThree = 3;
int inputPinFour = 4;

// Output Pins

int outputPinEleven = 11;
int outputPinTwelve = 12;
int outputPinThirteen = 13;




void setup()
{
  // Pins initilization
  
  pinMode(inputPinTwo,INPUT);
  pinMode(inputPinThree,INPUT);
  pinMode(inputPinFour,INPUT);
  
  pinMode(outputPinEleven,OUTPUT);
  pinMode(outputPinTwelve,OUTPUT);
  pinMode(outputPinThirteen,OUTPUT);
  
}

void loop()
{
  
  if(digitalRead(inputPinTwo)== HIGH||
     digitalRead(inputPinThree)== HIGH ||
     digitalRead(inputPinFour)== HIGH )
  {
    
    digitalWrite(outputPinEleven,HIGH);
    digitalWrite(outputPinTwelve,HIGH);
    digitalWrite(outputPinThirteen,HIGH);
    delay(10000);
    
    
  }
  
  else{
    digitalWrite(outputPinEleven,LOW);
    digitalWrite(outputPinTwelve,LOW);
    digitalWrite(outputPinThirteen,LOW); 
  }
  
  
}