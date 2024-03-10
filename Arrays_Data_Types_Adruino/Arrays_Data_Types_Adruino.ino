//================================== Arrays in Adruino! ==================================

/*----------------------- Arrays declarations! ------------------------

1. arr1[5];
2. arr1[]={1,2,3,4,5};
3. arr1[5]={4,5,3,8,6};
4. arr1[]="abcd";
5. arr1[5]="abcde";
6. arr1[]={'a','b','c','d'};
7. arr1[4]={'a','b','c','e'};

Note: Array is Homogenous in Nature!

==> All the elements of an array can be acessed by using their Index Numbers!
 */

 //Fetching the data from an array by using the Index Numbers.

 int arr1[5]={1,2,3,4,5};
 void setup()
 {
  //Program to setup withou initializations.
  Serial.begin(9600);
  Serial.print(arr1[1]);
 }
 void loop()
 {
  //Program in order to perform the main programmes!
 }

 //Another Examples.
 String val[4]={"Dhruv","Yugansh","Manan","Suyash"};
 int i;
 void getup()
 {
  //Program to write the main Initializations.
  Serial.begin(9600);
  Serial.print(val[2]);
 }
 void goop()
 {
  //program to show all values in an array!
  for(i=1;i<=4;i++)
  {
    Serial.print(val[i]);
  }
 }

 

 

 
