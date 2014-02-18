/*
Lec 01 - LED parpadeante
El hola mundo del Arduino
Para hacerlo parpadear mas rapido o mas lento, disminuir o aumentar el tiempo
en la funcion delay()
*/

//Definimos el el pin 13, que normalmente en los arduinos tiene un led conectado.
int led = 13;

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
