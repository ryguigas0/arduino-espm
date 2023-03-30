int inputBotao = 9;
int outputLed = 12;

void setup() { // Configuração inicial -> Roda uma vez
  Serial.begin(9600);
  pinMode(inputBotao, INPUT); // Configura o pino 9 como entrada de energia
  pinMode(outputLed, OUTPUT); // Configura o pink 12 como saída de energia
}

void loop() { // Roda indefinidamente
  if(digitalRead(inputBotao) == HIGH) { // Checa se o pink 9 está recebendo energia
    Serial.println("BOTÃO APERTADO!"); // Escreve no console
    digitalWrite(outputLed, HIGH); // Coloca o pino 12 para liberar energia
  } else {
    Serial.println("BOTÃO NÃO APERTADO!");
    digitalWrite(outputLed, LOW); // Coloca o pino 12 para não liberar energia
  }
}
