// C++ code
//
#include<Servo.h>
Servo servo;

void setup()
{
  servo.attach(6);
}

void loop()
{
  int pot = analogRead(A0);
  int angle = map(pot, 0, 1023, 0, 180);
  servo.write(angle);
  delay(10);
}