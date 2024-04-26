// Projeto 3 – Alarme com sonorizador piezo

// Armazena o valor de seno que fazer o valor se elevar e diminuir
float sinVal;
// Pega o valor armazenado em sinVal e converte-o para frequência...
//solicitada
int toneVal;

void setup() {
pinMode(8, OUTPUT); // Declara o pino 8 como saída
}

void loop() {
// Converte graus para radianos, e depois obtém o valor do seno
for (int x=0; x<180; x++) {

// Gera uma frequência a partir do valor do seno
sinVal = (sin(x*(3.1416/180)));

// Pega 2000 e adiciona sinVal multiplicando por 1000, gerando um...
//bom intervalo de frequências para o tom crescente e decrescente da...
//onda senoidal
toneVal = 2000+(int(sinVal*1000));

// O comando ton( ) é definido como ton(pin, frequency), o pin...
//corresponde o pino digital de saída e frequency é a frequência do...
//tom em Hertz
tone(8, toneVal);

delay(2); // Espera dois milissegundos entre as alterações de frequência
}
}
