// C++ code
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(3,LOW);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3,HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}