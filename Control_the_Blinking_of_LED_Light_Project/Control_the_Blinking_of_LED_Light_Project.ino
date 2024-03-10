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


#include <Servo.h>

#define TRIG_PIN 9
#define ECHO_PIN 10
#define SERVO_PIN 6

Servo servo;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  servo.attach(SERVO_PIN);
}

void loop() {
  int angle;
  long duration, distance;

  for (angle = 0; angle <= 180; angle += 10) {
    servo.write(angle);
    delay(500);
    duration = pulseIn(ECHO_PIN, HIGH);
    distance = duration * 0.034 / 2;
    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print(" Distance: ");
    Serial.println(distance);
  }

  for (angle = 180; angle >= 0; angle -= 10) {
    servo.write(angle);
    delay(500);
    duration = pulseIn(ECHO_PIN, HIGH);
    distance = duration * 0.034 / 2;
    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print(" Distance: ");
    Serial.println(distance);
  }
}
