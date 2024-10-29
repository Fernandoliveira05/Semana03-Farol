# Projeto de Semáforo com LEDs

* Orientador: Victor Takashi Hayashi

&nbsp;&nbsp;Este repositório contém uma montagem de um semáforo utilizando LEDs em uma protoboard, incluindo a programação que controla o acendimento e apagamento dos LEDs. 

Abaixo, você encontrará:
- Um breve relato sobre as conexões realizadas
- Tabela com especificações dos componentes utilizados
- Link para o vídeo demonstrando o funcionamento do semáforo
- Resultados dos testes realizados, com os nomes completos dos avaliadores

## Montagem e Conexões
A montagem foi realizada em uma protoboard, onde cada LED foi conectado a um resistor para limitar a corrente e não queimar os LEDs. As conexões dos LEDs (vermelho, amarelo e verde) representam as fases de um semáforo e foram feitas conforme o seguinte:

1. Conectar um jumper no polo negativo da protoboard e no GND do Arduino.
2. Conectar um jumper no polo positivo da protoboard e no 5V do Arduino.
3. Conectar os jumpers na coluna negativa da protoboard e nos resistores, que também estão conectados na protoboard.
4. Conectar jumpers na outra ponta do resistor e conectá-los na perninha menor do LED (polo negativo do LED).
5. Conectar jumpers macho-fêmea entre as portas do Arduino e o polo positivo do Arduino.
6. Programar o microcontrolador para acender e apagar os LEDs de acordo com o tempo de cada fase (verde, amarelo, vermelho), garantindo que o tempo esteja correto.
7. Colocar os LEDs na figura de corte a laser.


## Código da programação do semáforo
Você pode encontrar o código da programação do semáforo neste mesmo repositório, no arquivo nomeado como 'farol.ino'.  


## Especificações dos Componentes Utilizados

| Componente      | Especificação                       | Quantidade |
|-----------------|------------------------------------|------------|
| Protoboard      | 830 pontos                         | 1          |
| LED Vermelho    | 5mm, 2V, 20mA                      | 1          |
| LED Amarelo     | 5mm, 2V, 20mA                      | 1          |
| LED Verde       | 5mm, 2V, 20mA                      | 1          |
| Resistores      | 220Ω                               | 3          |
| Placa de desenvolvimento (Autoestudo diz que esse é o nome)| Arduino Uno                        | 1          |
| Fios Jumper     | macho-masculino     | 3        |
| Fios Jumper     | macho-fêmea     | 6        |



## Demonstração
Confira o vídeo de demonstração do funcionamento do semáforo: [[Link para o vídeo](https://drive.google.com/drive/folders/1a0dJrxijY6o_r1sBbGhSss7u4i5qY7j4?usp=drive_link)].


## Resultados dos Testes
Abaixo, os resultados dos testes realizados para verificar a funcionalidade do semáforo, incluindo o tempo de cada fase.

| Avaliador                  | Nota dos Testes | Motivo da Nota |
|----------------------------|----------------------|----------------------|
| Murilo Couto Oliveira |     10    |     "O aluno montou corretamente o circuito, e estruturou de forma robusta o a lógica do algoritimo no Arduino IDE. Além disso, foi além construindo os Leds no modelo miniatura de farol entregue pelo professor Hayashi."       |
| Larissa dos Santos Temoteo |  10   |  "Código bem estruturado, os fios estão organizados, dando para compreender. Além disso, seguem o tempo estipulado pela tarefa."        |
