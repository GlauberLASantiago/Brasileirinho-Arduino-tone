# Brasileirinho no Arduino com a Função Tone

Este repositório contém um sketch para Arduino que executa uma versão monofônica do famoso choro **"Brasileirinho"**, de Waldir Azevedo. A música é tocada utilizando a função `tone()` do Arduino, que gera as notas em um alto-falante ou buzzer.

O arranjo e a sequência de notas para esta execução foram elaborados por **Glauber Santiago**.

## 🎵 Sobre a Música

"Brasileirinho" é um dos choros mais conhecidos e celebrados da música popular brasileira, composto em 1947 pelo cavaquinista e compositor Waldir Azevedo. Este projeto é uma pequena homenagem a essa obra icônica, demonstrando como é possível recriar melodias complexas com hardware simples.

## ⚙️ Hardware Necessário

Para executar este projeto, você precisará de:

-   Uma placa Arduino (Uno, Nano, etc.).
-   Um pequeno alto-falante de 8 Ohm ou um buzzer piezoelétrico.
-   Fios (Jumpers).

## 🔌 Circuito

A montagem do circuito é muito simples. Conecte o alto-falante/buzzer ao Arduino da seguinte forma:

-   Conecte o pino positivo **(+)** do alto-falante/buzzer ao **Pino Digital 4** do Arduino.
-   Conecte o pino negativo **(-)** do alto-falante/buzzer ao pino **GND** (Terra) do Arduino.


+------------------+
|                  |
|      ARDUINO     |       | |
|                  |------ | | Alto-falante / Buzzer
|   PIN 4     o----|       | |
|                  |
|   GND       o----|-----------|
|                  |
+------------------+
🚀 Como Usar
Monte o circuito conforme descrito acima.

Abra o arquivo .ino na IDE do Arduino.

Conecte sua placa Arduino ao computador.

Selecione a placa e a porta COM corretas no menu "Ferramentas".

Clique no botão "Carregar" (Upload) para enviar o código para a placa.

Assim que o upload for concluído, a música começará a tocar automaticamente uma vez.

📄 Notas sobre o Código
O sequenciamento das notas (a longa lista de chamadas tone() e delay()) foi gerado com o auxílio da ferramenta MIDI-to-Arduino, um projeto de greenlightgo.org. A ferramenta converte arquivos MIDI em código C para Arduino.

O andamento da música pode ser ajustado alterando o valor da diretiva #define msPerTick 0.1. Valores menores aceleram a música, enquanto valores maiores a desaceleram.

🎶 Créditos
Música Original: Waldir Azevedo.

Arranjo e Sequenciamento para Arduino: Glauber Santiago.

Ferramenta de Geração de Código: MIDI-to-Arduino.
