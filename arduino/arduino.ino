void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(1000);
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(1000);// Wait for 2000 millisecond(s)
}
