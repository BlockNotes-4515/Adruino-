//======================================= Serial-Monitoring in Adruino! ===============================

// Main Purpose of Mnitoring: is used to check data-transfer and its working!

void setup()
{
  //Program that once initilializations.
  Serial.begin(9600);
}
void loop()
{
  //Write the code in continous manner of Serial-Monitor.
 if(Serial.available()==1)
 {
   char val=Serial.read();
   Serial.print(val);
 }
}
