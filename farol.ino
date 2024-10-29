// Definindo as variáveis com as respectivas portas dos leds
int amarelo = 12; 
int vermelho = 11; 
int verde = 13;

void setup()
{
  //Define a porta do Arduino como saida

  // Porta 12 - Amarelo
  pinMode(amarelo, OUTPUT);

  // Porta 11 - Vermelho
  pinMode(vermelho, OUTPUT);

  // Porta 13 - Verde
  pinMode(verde, OUTPUT);
}
   
void loop()
{
  //Acende os leds com delays que simulam o pedido

  // Acende o led vermelho por 6 segundos, enquanto os demais continuam desligados
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);


  delay(6000);


  // Após 6 segundos desliga o led vermelho
  digitalWrite(vermelho, LOW);


  // Espera um pouco pra fazer a transição
  delay(500);


  // Liga o led amarelo durante 2 segundos
  digitalWrite(amarelo, HIGH);
  delay(2000);
  

  // Após 2 segundos desliga o farol
  digitalWrite(amarelo, LOW);
  // Espera um pouco para fazer a transição
  delay(500);


  // Liga o farol verde durante 2 segundos, posteriormente adicionando mais 2 segundos
  digitalWrite(verde, HIGH);
  delay(2000);
  delay(2000);


  // Desliga o farol verde
  digitalWrite(verde, LOW);
  // Espera um pouco para fazer a transição
  delay(500);


  // Liga o led amarelo durante 2 segundos
  digitalWrite(amarelo, HIGH);
  delay(2000);
  // Espera um pouco para fazer a transição
  delay(500);


  // Após 2 segundos desliga o amarelo
  digitalWrite(amarelo, LOW);
  
  // Espera um pouco para fazer a transição
  delay(500);
}