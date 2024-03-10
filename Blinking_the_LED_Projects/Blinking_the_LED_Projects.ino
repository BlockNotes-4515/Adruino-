//=================================== Some Basic Functions In Adruino! ================================
/*

1. pinMode(): Configures the Specified Pin to behave eighter as an Input or Output!

Syntax: pinMode(pin,Mode);

pin:Adruino Pin Name(integer forms).

Mode: INPUT/ OUTPUT.

Examples: pinMode(14,OUTPUT);
 */

 /*
2. digitalWrite(): We, have the Capability to pass two type of signal as an output!

--> Two Signals are: HIGH / LOW.

--> Syntax: digitalWrite(pin,value);

--> pin: Adruino Pin.

--> Value: HIGH /LOW.

--> Examples: digitalWrite(13,HIGH);
  */

  /*
3. delay(): is used in terms time interval, in order to delay any events! in (milliseconds).

--> Syntax: delay(ms);

--> It, delays the Program in terms of 1ms.

--> Examples: delay(1000);  
*/

//------------------------------ Program to Blink the Bulb on Digital pin-13! -------------------------!

void setup()
{
  pinMode(13,OUTPUT); // in, order to tell adruino board to use this pin in which manner.
}
void loop()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
