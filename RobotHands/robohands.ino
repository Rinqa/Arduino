#include <Servo.h>

Servo servo_10;

Servo servo_9;

Servo servo_6;

Servo servo_5;

Servo servo_3;

void setup()
{
  pinMode(A0, INPUT);
  servo_10.attach(10);

  pinMode(A1, INPUT);
  servo_9.attach(9);

  pinMode(A2, INPUT);
  servo_6.attach(6);

  pinMode(A3, INPUT);
  servo_5.attach(5);

  pinMode(A4, INPUT);
  servo_3.attach(3);

}

void loop()
{
  if (digitalRead(A0) < 1) {
    servo_10.write(0);
  }
  if (digitalRead(A0) > 0) {
    servo_10.write(0);
  }
  if (digitalRead(A1) < 1) {
    servo_9.write(90);
  }
  if (digitalRead(A1) > 0) {
    servo_9.write(0);
  }
  if (digitalRead(A2) < 1) {
    servo_6.write(90);
  }
  if (digitalRead(A2) > 0) {
    servo_6.write(90);
  }
  if (digitalRead(A3) < 1) {
    servo_5.write(0);
  }
  if (digitalRead(A3) > 0) {
    servo_5.write(90);
  }
  if (digitalRead(A4) < 1) {
    servo_3.write(0);
  }
  if (digitalRead(A4) > 0) {
    servo_3.write(90);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
