#include <ESP32Servo.h>

Servo myServo;
const int IRPin = 13;
const int servo = 12;

void setup()
{
  myServo.attach(servo);
  pinMode(IRPin, INPUT);

  myServo.write(0);
}

void loop()
{
  if (digitalRead(IRPin) == LOW) {
    // object detected, open door
    myServo.write(90);
    delay(5000);
    myServo.write(0);
  }
}
