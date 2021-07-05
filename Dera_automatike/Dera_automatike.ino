// Dera automatike 
//Thirrja e libraris se servomotorrit
#include <Servo.h>
//Definimi i servo motorrit se ne cilin pin ndodhet 
Servo servo_6;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  servo_6.attach(6);

}

void loop()// void loop eshte unaza loop e cila
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) < 50) {
    servo_6.write(145);
    delay(2000); // Pret per 5 sekonda(s)
  } else {
    servo_6.write(50);
    delay(1000); // Pret per 1 sekond(s)
  }
}
