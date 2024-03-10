//================================ digitalRead() functions! =============================

/*
Digital read: function is used to read the performing perations in terms of (HIGH/LOW).

Syntax: digitalRead(pin);

For-Examples: digitalRead(13);
 */

void setup()
{
  //Programmes to write to setup.
  pinMode(12,INPUT_PULLUP);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  //Programmes to perform the main programmes.
  int val=digitalRead(12);
  Serial.print(val);
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  
}
