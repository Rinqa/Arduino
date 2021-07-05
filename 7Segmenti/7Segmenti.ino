#include <Servo.h>

Servo servo_2;

Servo servo_3;

Servo servo_4;

Servo servo_5;

Servo servo_6;

Servo servo_7;

Servo servo_8;

void setup()
{
  servo_2.attach(2);

  servo_3.attach(3);

  servo_4.attach(4);

  servo_5.attach(5);

  servo_6.attach(6);

  servo_7.attach(7);

  servo_8.attach(8);

}

void loop()
{
  servo_2.write(0);
  servo_3.write(80);
  servo_4.write(80);
  servo_5.write(0);
  servo_6.write(0);
  servo_7.write(0);
  servo_8.write(0);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_2.write(80);
  servo_3.write(80);
  servo_4.write(0);
  servo_5.write(80);
  servo_6.write(80);
  servo_7.write(80);
  servo_8.write(0);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_2.write(80);
  servo_3.write(80);
  servo_4.write(80);
  servo_5.write(80);
  servo_6.write(0);
  servo_7.write(80);
  servo_8.write(0);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_2.write(0);
  servo_3.write(80);
  servo_4.write(80);
  servo_5.write(0);
  servo_6.write(0);
  servo_7.write(80);
  servo_8.write(80);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_2.write(80);
  servo_3.write(0);
  servo_4.write(80);
  servo_5.write(80);
  servo_6.write(0);
  servo_7.write(80);
  servo_8.write(80);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_2.write(80);
  servo_3.write(0);
  servo_4.write(80);
  servo_5.write(80);
  servo_6.write(80);
  servo_7.write(80);
  servo_8.write(80);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_2.write(80);
  servo_3.write(80);
  servo_4.write(80);
  servo_5.write(0);
  servo_6.write(0);
  servo_7.write(0);
  servo_8.write(0);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_2.write(80);
  servo_3.write(80);
  servo_4.write(80);
  servo_5.write(80);
  servo_6.write(80);
  servo_7.write(0);
  servo_8.write(80);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_2.write(80);
  servo_3.write(80);
  servo_4.write(80);
  servo_5.write(0);
  servo_6.write(0);
  servo_7.write(80);
  servo_8.write(80);
}
