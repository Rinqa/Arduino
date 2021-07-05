//Thirrjen e libraris se servo motorrit
#include <Servo.h>
//Definimin e variablave ku ruhen vlerat e senzorit te distaces
int trigPin = 11;    //Trig - green Jumper
int echoPin = 12;    //Echo - yellow Jumper
long duration, cm, inches;
//definimi i variables per servo motorr
Servo servo_3;
 
void setup() {//Definimin e inputeve dhe outputeve mbrenda arduinos
  servo_3.attach(3);
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop()//Eshte unaza ku behet definimi i funksineve qe kryhen mbrend arduinos

{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1;
  inches = (duration/2) / 74; 
  //definimi i funksionit if ku behet krahasime te ndryshme si pershembull 
  if (cm<10){
    servo_3.write(90);
    delay(2000);
  } else{
    servo_3.write(0);
  }
    
  
}
