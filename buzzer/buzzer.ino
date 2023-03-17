void setup() {
  pinMode(10, OUTPUT);

}

void loop() {
  tone(10, 2000); // Faz o buzzer na porta 10 fazer som na frequência de 2000Hz
  delay(1000);
  noTone(10); // Corta a energia do buzzer na porta 10
  delay(1000);
}
