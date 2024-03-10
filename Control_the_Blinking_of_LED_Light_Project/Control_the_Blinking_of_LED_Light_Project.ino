//=============================== Program to write the code to detect any obstacle and beep under the range given by he user! ======================================

void setup()
{
  //Programmes to implement the main code.
  pinMode(12,INPUT_PULLUP);
  pinMode(6,OUTPUT);
}
void loop()
{
  //Programme to Implement the Main Code here!
  int val=digitalRead(12);
  if(val==0)
  {
    count=count+1;
  }
  else if(val==1)
  {
    analogWrite(6,100);
  }
  else if(val==2)
  {
    analogWrite(6,180);
  }
  else{
    analogWrite(6,255);
    count=0;
  }
  delay(200);  //Time-Delay of around 200ms.
}
