/*
Lec 02 - LED parpadeante en diferentes puertos

Misma estructura que Lec 01, sin embargo cambiamos el numero de pin.
Los valores recomendados son del 2 al 13.
*/

//Definimos el el pin 13, que normalmente en los arduinos tiene un led conectado.
int led = 2;

//Para cualquier programa por default hay que definir dos metodos:
// setup() y loop()

//setup se ejecuta una vez.
void setup(){
  pinMode(led, OUTPUT); //el metodo pinMode configura como funcionara cada pin.
}

//loop() se ejecuta una y otra vez infinitamente
void loop(){
  digitalWrite(led, HIGH);  //Prende el led (HIGH es el nivel de voltaje, 5v)
  delay(1000);             //delay() hace que el arduino espere en ms. 1 seg.
  digitalWrite(led, LOW);  //Apaga el led (LOW es el nivel de voltaje, 0v)
  delay(1000);             //delay() hace que el arduino espere en ms
}
