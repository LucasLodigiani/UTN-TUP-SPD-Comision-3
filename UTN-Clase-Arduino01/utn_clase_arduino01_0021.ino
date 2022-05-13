int led1 = 8, led2 = 7, led3 = 2;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led2, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led2, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led3, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led3, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led3, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led3, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led2, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led2, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led1, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  delay(100); // Wait for 1000 millisecond(s)

}