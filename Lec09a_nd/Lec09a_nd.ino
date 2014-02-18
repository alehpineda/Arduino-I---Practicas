/*
Lec 09a - Entradas Analogicas

Mostraremos la lectura de una entrada analogica en el Monitor Serial.
*/

int pinPot=0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int reading = analogRead(pinPot);
  Serial.println(reading);
  delay(500);
}
