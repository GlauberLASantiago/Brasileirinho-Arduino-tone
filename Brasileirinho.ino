/*
   Peça musical executada pela função Tone do Arduino. Execução monofônica. (Musical piece performed by Arduino Tone function. Monophonic playback.)
   Título(Title): Brasileirinho.
   Música (Music): Waldir Azevedo.
   Arranjo (Arrangement): Glauber Santiago.
   Circuito (Circuit): Autofalante de 8 ohm no pino 4 (8 ohm speaker on digital pin 8).
   MIDI-Arduino Sequencing code generator
   Courtesy of http://greenlightgo.org/projects/midi-to-arduino/
   A peça será executada uma vez apenas. Its will be executed once only.
*/

#define msPerTick 0.1 //Andamento(Tempo)

void setup() {
  pinMode(4, OUTPUT);

  doPerformance();
}

void loop() {
}

void doPerformance() {
  tone(4, 494);

  delay(102 * msPerTick);

  noTone(4);

  delay(154 * msPerTick);

  tone(4, 494);

  delay(205 * msPerTick);

  noTone(4);

  delay(307 * msPerTick);

  tone(4, 494);

  delay(102 * msPerTick);

  noTone(4);

  delay(410 * msPerTick);

  tone(4, 392);

  delay(205 * msPerTick);

  noTone(4);

  delay(307 * msPerTick);

  tone(4, 494);

  delay(102 * msPerTick);

  noTone(4);

  delay(154 * msPerTick);

  tone(4, 587);

  delay(205 * msPerTick);

  noTone(4);

  delay(819 * msPerTick);

  tone(4, 294);

  delay(205 * msPerTick);

  noTone(4);

  delay(819 * msPerTick);

  tone(4, 147);

  delay(205 * msPerTick);

  noTone(4);

  delay(307 * msPerTick);

  tone(4, 988);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(384 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 880);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 831);

  delay(128 * msPerTick);

  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 165);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(128 * msPerTick);

  tone(4, 175);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 165);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 880);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 831);

  delay(128 * msPerTick);

  tone(4, 98);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 220);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 208);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 185);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 165);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 147);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 98);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 220);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 220);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 494);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 370);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 220);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 554);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 554);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 494);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 220);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 185);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 220);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 185);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 165);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 185);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 165);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 147);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(307 * msPerTick);

  noTone(4);

  delay(461 * msPerTick);

  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(205 * msPerTick);

  noTone(4);

  delay(563 * msPerTick);

  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(307 * msPerTick);

  noTone(4);

  delay(461 * msPerTick);

  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(205 * msPerTick);

  noTone(4);

  delay(563 * msPerTick);

  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(307 * msPerTick);

  noTone(4);

  delay(461 * msPerTick);

  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(512 * msPerTick);

  noTone(4);

  delay(256 * msPerTick);

  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 494);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 110);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 123);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 131);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 147);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 165);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 185);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(205 * msPerTick);

  noTone(4);

  delay(307 * msPerTick);

  tone(4, 147);

  delay(205 * msPerTick);

  noTone(4);

  delay(307 * msPerTick);

  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 98);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 466);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  tone(4, 110);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 294);

  delay(128 * msPerTick);

  tone(4, 117);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 117);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 466);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  tone(4, 98);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  tone(4, 123);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  tone(4, 123);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  tone(4, 117);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(384 * msPerTick);

  tone(4, 110);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(384 * msPerTick);

  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 440);

  delay(384 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 370);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(128 * msPerTick);

  tone(4, 65);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 311);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 262);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);
  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 311);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 262);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 98);
  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 220);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 262);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 330);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 349);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(640 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);

  delay(384 * msPerTick);

  tone(4, 175);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(512 * msPerTick);

  noTone(4);

  delay(128 * msPerTick);

  tone(4, 165);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(640 * msPerTick);

  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(384 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 554);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 330);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 277);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 139);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 277);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 330);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 554);

  delay(1024 * msPerTick);

  noTone(4);

  delay(128 * msPerTick);

  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  tone(4, 349);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  tone(4, 311);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  tone(4, 262);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 220);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 370);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(128 * msPerTick);

  tone(4, 65);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 311);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 262);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);
  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 98);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 262);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 311);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 233);
  tone(4, 523);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 131);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 147);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 131);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 117);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 98);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 466);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  tone(4, 110);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 294);

  delay(128 * msPerTick);

  tone(4, 117);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 117);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 466);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  tone(4, 98);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  tone(4, 123);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  tone(4, 123);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  tone(4, 117);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(384 * msPerTick);

  tone(4, 110);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(384 * msPerTick);

  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 440);

  delay(384 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 370);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(128 * msPerTick);

  tone(4, 65);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 311);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 262);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);
  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 622);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 311);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 262);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);
  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 117);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 98);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 117);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 262);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(640 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(205 * msPerTick);

  noTone(4);

  delay(307 * msPerTick);

  tone(4, 784);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(205 * msPerTick);

  noTone(4);

  delay(307 * msPerTick);

  tone(4, 784);

  delay(128 * msPerTick);

  tone(4, 131);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);

  delay(256 * msPerTick);

  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 349);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 330);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 622);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(512 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(1024 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 277);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 277);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(205 * msPerTick);

  noTone(4);

  delay(307 * msPerTick);

  tone(4, 196);

  delay(205 * msPerTick);

  noTone(4);

  delay(307 * msPerTick);

  tone(4, 98);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 880);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 831);

  delay(128 * msPerTick);

  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 165);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(128 * msPerTick);

  tone(4, 175);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 156);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 165);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 988);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 932);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 880);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 831);

  delay(128 * msPerTick);

  tone(4, 98);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 233);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 220);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 208);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 185);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 165);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 147);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 98);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 220);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 220);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 494);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 370);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 220);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 523);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 554);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 554);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 494);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 220);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 185);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 220);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 185);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 165);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 185);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 165);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 147);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(307 * msPerTick);

  noTone(4);

  delay(461 * msPerTick);

  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(205 * msPerTick);

  noTone(4);

  delay(563 * msPerTick);

  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 73);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(307 * msPerTick);

  noTone(4);

  delay(461 * msPerTick);

  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(205 * msPerTick);

  noTone(4);

  delay(563 * msPerTick);

  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(128 * msPerTick);

  tone(4, 123);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(307 * msPerTick);

  noTone(4);

  delay(461 * msPerTick);

  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 698);

  delay(128 * msPerTick);

  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 740);

  delay(512 * msPerTick);

  noTone(4);

  delay(256 * msPerTick);

  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 494);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(128 * msPerTick);

  tone(4, 247);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 440);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 494);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 494);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 494);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 466);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 494);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 523);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 554);

  delay(128 * msPerTick);

  tone(4, 247);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 554);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 554);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(256 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(128 * msPerTick);

  tone(4, 494);

  delay(128 * msPerTick);

  noTone(4);
  noTone(4);
  tone(4, 784);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 440);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 370);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 494);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 440);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 740);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 659);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 370);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 247);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 220);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 330);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 247);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 220);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 370);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 330);

  delay(205 * msPerTick);

  noTone(4);

  delay(179 * msPerTick);

  tone(4, 185);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(205 * msPerTick);

  noTone(4);

  delay(307 * msPerTick);

  tone(4, 196);

  delay(51 * msPerTick);

  noTone(4);

  delay(77 * msPerTick);

  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  noTone(4);

  delay(1664 * msPerTick);

  tone(4, 247);

  delay(51 * msPerTick);

  noTone(4);

  delay(77 * msPerTick);

  tone(4, 494);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  noTone(4);

  delay(1664 * msPerTick);

  tone(4, 196);

  delay(51 * msPerTick);

  noTone(4);

  delay(77 * msPerTick);

  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  noTone(4);

  delay(1664 * msPerTick);

  tone(4, 196);

  delay(64 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(64 * msPerTick);

  noTone(4);
  tone(4, 494);

  delay(64 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(576 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(64 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(64 * msPerTick);

  noTone(4);
  tone(4, 494);

  delay(64 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(1088 * msPerTick);

  noTone(4);
  tone(4, 1568);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 1175);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 988);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 784);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 587);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 494);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 392);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 294);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 247);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 196);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 147);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 123);

  delay(128 * msPerTick);

  noTone(4);
  tone(4, 98);

  delay(512 * msPerTick);

  noTone(4);
}


