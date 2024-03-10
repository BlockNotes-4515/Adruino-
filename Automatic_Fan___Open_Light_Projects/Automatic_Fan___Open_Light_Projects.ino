void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  Serial.print(val);
  delay(1000);
}

//For Analog Write.
void getup()
{
  //We, can setup the main code.
}
void print()
{
  //Printing and running the main code here.
//  analogWrite(A0);
}

//Writing the Main program Projects to on the fan when the emperature is above > 35 deg. celsius.
float temperature=0.0;
void readtemp()
{
  //Program that setup the main code.
  Serial.begin(9600);
}
void printing()
{
  //Printing the Main programmes.
  if(temperature>35.5)
  {
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
}


//Projects: When we, can press theButton it open the Light unless light is off!
void putdata()
{
  //Program to implement the main setup!
  pinMode(2,INPUT_PULLUP);
  pinMode(6,OUTPUT);
}
void show()
{
  //Program toperform running of the Main programmes.
  int val=digitalRead(2);
  if(val==0)
  {
    digitalWrite(6,HIGH);
  }
  else
  {
    digitalWrite(6,LOW);
  }
}
