//thirrja e libraris se lcd display
#include <LiquidCrystal.h>
//definimi i variablave
int pinTemp=A0;
int piezzo=8;
int trigPin = 6;    //Trig - green Jumper
int echoPin = 7;    //Echo - yellow Jumper
long duration, cm, inches;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//definimi i inputeve dhe outputeve mbrenda arduinos
void setup() {
  // definimin e kolave dhe rreshtave mbrenda lcd display
  lcd.begin(16, 2);
  // Printimi i mesazhit te par mbrenda lcd display
lcd.print("Matja Distances:");

  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {//eshte unaza loop ne te cilen kryhen funksione te ndryshme
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1;
  inches = (duration/2) / 74; 
  

//funksioni if
if(cm<=10){
    tone(piezzo, 1000, 200);
    }
  
 
  lcd.setCursor(0, 1);
  lcd.print("Cm:");
  lcd.print(cm);
  lcd.print("                              ");
 
  

  

    

      
 
  
}
