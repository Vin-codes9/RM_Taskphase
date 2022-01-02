#include <Servo.h>

Servo myservo;
int servoPin = 2;
int val = 0;
void setup()
{
  myservo.attach(servoPin);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
 { val = Serial.read();
 }
  Serial.println(val);
  myservo.write(val);
  delay(15);
}    