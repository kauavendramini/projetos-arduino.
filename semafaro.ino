int vermelho = 10;
int amarelo = 9;
int verde = 8;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {

  // Verde ligado
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
  delay(5000);

  // Amarelo ligado
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
  delay(2000);

  // Vermelho ligado
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(5000);

}
