/*
Lec 11 - Pseudo Theremin

El theremin es un instrumento musical que hace sonidos mientras pasas tu mano
sobre el.

El sonido cambiara si le pasas la mano a la fotoresistencia.
*/

int speakerPin = 12; 
int photocellPin = 0;

void setup() {
}

void loop() {
  int reading = analogRead(photocellPin); 
  int pitch = 200 + reading / 4; 
  tone(speakerPin, pitch);
}
