#include <Servo.h>//Thiirrja e libraris se servo motorrave
//Definimin e variablave ku ruhen vlera prej senzorit te distances
int trigPin = 11;    //Trig - green Jumper
int echoPin = 12;    //Echo - yellow Jumper
long duration, cm, inches;

//definimin e vendosjes se servo motorrave ne arduino
Servo servo_5;
Servo servo_6;
 
void setup() {//Definimin e inputeve dhe outputeve mbrenda arduinos
  Serial.begin (9600);
  servo_5.attach(5);
  servo_6.attach(6);
  
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
  
  if(cm<50){   
    servo_5.write(130);
    servo_6.write(130);
  }
  else{
    servo_5.write(150);
    servo_6.write(30);
  }
  

}
