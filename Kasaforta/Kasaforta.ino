#include <Servo.h>

Servo servo_3;
byte rows[] = {11,10,9,8};
byte columns[] = {7,6,5,4};
int pass [10]={0,1,1,1,1,0,0,0,0,0};
int hyrja[10]= {0,0,0,0,0,0,0,0,0,0};
int test = 0;
 
char getKey(){
  char keys[4][4] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
  };
   
  char k = '\0';
   
  for (int r=0; r<4; r++){
    digitalWrite(rows[r], LOW);
     
    for (int c=0; c<4; c++){
      if (digitalRead(columns[c]) == LOW){
        k = keys[r][c];
        break;
      }
    }
     
    digitalWrite(rows[r], HIGH);
     
    if (k) {
      break;
    }
  }
   
  return k;
}
 
char getKeyOnce(){
  static char lastVal = '\0';
  static unsigned long m = 0;
  char val = getKey();
  if (lastVal != val && millis() > (m+100) ) { //M+100 -->DEBOUNCING 100ms
    lastVal = val;
    m = millis();
     
    return lastVal;
  } 
  return '\0';
}
 
void setup() {
  servo_3.attach(3);
  for (int i=0; i<4; i++){
    pinMode(rows[i], OUTPUT);
    pinMode(columns[i], INPUT_PULLUP);
     
    digitalWrite(rows[i], HIGH);
  }
   
  Serial.begin(9600);
}
 
void loop(){
   
  char k = getKeyOnce();
  if (k == '0') {
    hyrja [0]= 1;
    Serial.println(k);
  }
  if (k == '1') {
    hyrja [1]= 1;
    Serial.println(k);
  }
  if (k == '2') {
    hyrja [2]= 1;
    Serial.println(k);
  }
  if (k == '3') {
    hyrja [3]= 1;
    Serial.println(k);
  }
  if (k == '4') {
    hyrja [4]= 1;
    Serial.println(k);
  }
  if (k == '5') {
    hyrja [5]= 1;
    Serial.println(k);
  }
  if (k == '6') {
    hyrja [6]= 1;
    Serial.println(k);
  }
  if (k == '7') {
    hyrja [7]= 1;
    Serial.println(k);
  }
  if (k == '8') {
    hyrja [8]= 1;
    Serial.println(k);
  }
  if (k == '9') {
    hyrja [9]= 1;
    Serial.println(k);
  }
  if (k == '*') {
    for(int s=0; s<10; s++){
      if(pass[s]==hyrja[s]){
        test = test+1;
      }
    }
    if(test == 10){
      Serial.println("KORREKT");
       servo_3.write(90);
      digitalWrite(2, LOW);
      digitalWrite(12, HIGH);
      }
      else{
        servo_3.write(0);
        Serial.println(" jo KORREKT");
        digitalWrite(2, HIGH);
        digitalWrite(12, LOW);
       }
  }
 if (k == '#') {
    for(int m=0; m<10; m++){
      hyrja[m]=0;
    }
   test=0;
    servo_3.write(0);
   digitalWrite(2, LOW);
   digitalWrite(12, LOW);
   
  }
  
   
  delay(10); //apenas para o simulador. 
}
