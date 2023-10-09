// C++ code
//
int Tempo = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);

  Tempo = 1000;
}

void loop()
{
  delay(Tempo); // Wait for Tempo millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(Tempo); // Wait for Tempo millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(Tempo); // Wait for Tempo millisecond(s)
  digitalWrite(12, LOW);
  delay(Tempo); // Wait for Tempo millisecond(s)
  digitalWrite(12, HIGH);
}