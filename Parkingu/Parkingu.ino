//definimi i varablave qe tregoj se a jane te lire parkingjet ku ne fillim i kemi vleren  0 ku ne baze te funksioneve me poshte marrin vlera tjera
int p1 = 0;

int p2 = 0;

int p3 = 0;

int paringu = 0;

int p4 = 0;

void setup()
{// definimi i inputeve dhe outputeve ne arduino ku arduino ku  pinmode sherbejn si input ose output
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()//eshte unaza loop ne te cilen tregohen funksionet te cilat kryhen mbrenda arudinos ku definohen funksionet e ndryshme 
{
  if (analogRead(A0) > 50) {
    p1 = 1;//qe do te thote qe parkingu eshte i lire
  } else {
    p1 = 0;//qe do te thote qe parkingu eshte i zene
  }
  if (analogRead(A1) > 50) {
    p2 = 1;
  } else {
    p2 = 0;
  }
  if (analogRead(A2) > 50) {
    p3 = 1;
  } else {
    p3 = 0;
  }
  if (analogRead(A3) > 50) {
    p4 = 1;
  } else {
    p4 = 0;
  }
  //dhenja e vleres ne variablen e parkingut sa sa vende te lira kemi
  paringu = 0;
  if (p1 == 1) {
    paringu += 1;
  }
  if (p2 == 1) {
    paringu += 1;
  }
  if (p3 == 1) {
    paringu += 1;
  }
  if (p4 == 1) {
    paringu += 1;
  }
 //Shfaqja e vlerave ne 7 segment
  if (paringu == 3) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
  if (paringu == 2) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
  if (paringu == 1) {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  if (paringu == 4) {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if (paringu == 0) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
  delay(10); // Delay sherben per sekondat ku perseritet funksioni mbrenda unazes loop
}
