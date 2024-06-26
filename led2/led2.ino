// 6 Leds piscando em sequencia
// Usando o conceito de Array
// Declaracao da variavel inteira "espera" ...
// ... para ajuste do tempo de espera
int espera = 500;  
 
// Declarando a matriz Pinos{} com 6 elementos
// Os elementos sao os pinos do Arduino ligados aos Leds
int Pinos[] = {2, 7, 4, 6, 5, 3}; 
 
// Declarando a variável ContaPino com a ...
// ... quantidade de pinos usados (contador)
int ContaPino = 6; 
 
void setup() {
  // Os elementos da matriz sao numerados de 0 até (ContaPino -1) 
  // Usando um for() para definir cada pino digital ...
  // ... do Arduino como uma saída (OUTPUT)
  // PinoArdu é uma variavel inteira e local ...
  // ... para atribuir os numeros de pinos usados no Arduino
  // PinoArdu=0 --> Pinos[0] é 2 --> OUTPUT
  // PinoArdu=1 --> Pinos[1] = 7 --> OUTPUT
  // PinoArdu=2 --> Pinos[2] = 4 --> OUTPUT
  // PinoArdu=3 --> Pinos[3] = 6 --> OUTPUT
  // PinoArdu=4 --> Pinos[4] = 5 --> OUTPUT
  // PinoArdu=5 --> Pinos[5] = 3 --> OUTPUT
   
  for (int PinoArdu = 0; PinoArdu < ContaPino; PinoArdu++) {
    pinMode(Pinos[PinoArdu], OUTPUT);
  }
}
 
void loop() {
  // Pisca Leds na ordem crescente
  for (int PinoArdu = 0; PinoArdu < ContaPino; PinoArdu++) {
    // liga Led 
    digitalWrite(Pinos[PinoArdu], HIGH);
    delay(espera);
    // desliga Led
    digitalWrite(Pinos[PinoArdu], LOW);
 
  }
 
  // Pisca Leds em ordem descrescente
  for (int PinoArdu = ContaPino - 1; PinoArdu >= 0; PinoArdu--) {
    // liga Led
    digitalWrite(Pinos[PinoArdu], HIGH);
    delay(espera);
    // desliga Led
    digitalWrite(Pinos[PinoArdu], LOW);
  }
}