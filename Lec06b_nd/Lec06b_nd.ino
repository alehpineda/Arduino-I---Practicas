/*
Lec 06b - Entrada Digital usando pullup

En pinMode() utilizaremos INPUT_PULLUP en lugar de INPUT

INPUT_PULLUP - Significa que el pin se usara como entrada. Sin embargo,
si nada esta conectado a dicha entrada, esta estara en ALTO. En otras palabras,
su valor default es alto, a menos que la bajemos precionando el boton. Es por
esto que los botones estan conectados a GND, osease tierra. Por lo tanto, ya no
es alto.

Reto extra:
  Agregar mensajes para el monitor serial. Puedes hacer que aparesca cual boton apretaste.
*/

//Declaramos variables
int led=7;
int botonA=8;
int botonB=9;

//Inicializamos
void setup(){
  pinMode(led, OUTPUT);
  pinMode(botonA, INPUT_PULLUP);
  pinMode(botonB, INPUT_PULLUP);
}

void loop(){
  if(digitalRead(botonA)==LOW){
    digitalWrite(led, HIGH);
  }
  if(digitalRead(botonB)==LOW){
    digitalWrite(led, LOW);
  }
}
