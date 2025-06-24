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
  // Read potentiometer value from Analog pin A0
  int pot = analogRead(A0);
  
  // Convert analog value from [0...1023] to angle [0...180]
  int angle = map(pot, 0, 1023, 0, 180);
  
  // Make servo move
  servo.write(angle);
  
  // Give a Ide time to microcontroller
  delay(10);
}