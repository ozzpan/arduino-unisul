// Biblioteca para manipular o servo
#include <Servo.h>

 //Armazena o estado do botão lido
 int estadoBotao = 0;

 //Guarda o estado
 int guardaEstado = 0;

 // Variável do micro servo
 Servo servo_11;

 void setup()
 {
 // Porta 12 (Botão) em modo de entrada(leitura).
 pinMode(12, INPUT);
 // Conecta o micro servo na porta 11
 servo_11.attach(11, 500, 2500);
 }

 void loop()

 {
 // Leitura do estado do botão
 estadoBotao = digitalRead(12);
 // Avalia o estado lido
 if (estadoBotao == HIGH) {
 // Troca o estado guardado
 if (guardaEstado == HIGH) {
 guardaEstado = LOW;
 } else {
 guardaEstado = HIGH;
 }
 }
 //Se estado guardado é ligado
 if (guardaEstado == HIGH) {
 // Avança até 180 graus
 servo_11.write(180);
 } else {
 // Avança até 0 graus
 servo_11.write(0);
 }
 delay(25); // Aguarda 250 milésimos de segundos
 }
