//=========================================== Numeric DataTypes! ============================= in Adruino!======================

/*

1. Byte: A Byte stores a 8-bit unsigned Number , from(0-255) Positive Values (Maximum Values of 2^8-1) ~255.

Syntax: byrte var = value;

--> var: Variable name.
--> value: the no, or values assigned to that particular variable.

For Examples: byte var=155;
 */
 /*
2. Word: A word can store in Unsigned Number (Positive Number) of atleast 16-bits from 0-65535 (max. values: 2^16-1).

Syntax: word var = value;

--> var: variable Names.
--> Values: assigned to that particular Variables.

For-Examples: word var = 2568;
  */
/*
3. short: A short is a 16-bit data type.
          A Short stores 16-bit 2-byte data-types, 

Syntax: short var = value;

--> var: name of the Variables.
--> values: the value is assigned to that particular variables.

For-Examples: short val = 75;
              short var=-789;
 */
 
 /*
4. int: Integer is 16-bit (2-byte values) both positive to negative values (65525 to -65535).

Syntax: int a = 10;

--> a: name of the Variables.
--> 10: is the values.

For-Examples: int a=90;

Other datatypes are: float, long, double, unsigned int(Only Positive Numbers), Similarly Unsigned-long.
*/
//=========================================== Text Datatypes in Adruino Programming! =====================================

/*
1. Char: is a datatype is used to store single-charcter enclosed under single. double quotes.

Syntax: char val='A';

--> val=name of the Valriables.
--> value: values assigned to the Varoables.

For-Examples: char val = 'A';
 */

 
//Examples of Char datatype.

char var = 65;
void setup()
{
  //Program to setup initialized once.
  Serial.begin(9600);
  Serial.print(var);
}
void loop()
{
  //program to perform loopings concepts.
}

/*
2. String: is used to contain the characters or the string enclosed under double, single quotes.

Syntax: String val=value;

--> val: name of the Variables.
--> value: values stored in the variables.

For-Examples: String name = "Dhruv Dhayal";
 */

String name="abc";
void getup()
{
  //Program to setup.
  Serial.begin(9600);
  Serial.print(name);
}
void goop()
{
  //Program that perform some kind of looping concepts.
}
