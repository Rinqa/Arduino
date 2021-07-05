#include <Servo.h>

Servo servo_5;

Servo servo_6;

void setup()
{
  servo_5.attach(5);

  servo_6.attach(6);

}

void loop()
{
  servo_5.write(0);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_5.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_5.write(0);
  servo_6.write(0);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_6.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_6.write(0);
}
