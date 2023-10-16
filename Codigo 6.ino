 //Armazena o estado do sensor
 int estadoSensor = 0;
 void setup()
 {
 // Porta 13 (LED_BUILTIN) em modo de entrada(leitura)
 pinMode(12, INPUT);
 // Porta 13 (LED_BUILTIN) em modo de saída(escrita)
 pinMode(LED_BUILTIN, OUTPUT);
 }

 void loop()
 {
 // Leitura do sensor da porta 12
  estadoSensor = digitalRead(12);
 // Se o sensor é igual a 1
 if (estadoSensor == HIGH) {
 digitalWrite(LED_BUILTIN, HIGH);
 } else {
 digitalWrite(LED_BUILTIN, LOW);
 }
 // Atrase um pouco para melhorar o desempenho da simulação
 delay(10);
 }