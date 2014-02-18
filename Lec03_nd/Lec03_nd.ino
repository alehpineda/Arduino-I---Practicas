/*
Lec 03 - LED RGB

En esta practica controlaremos un led RGB.
Juega con los valores para observar que colores obtienes.
*/

//Declaracion de los pines que vamos a utilizar
int redPin = 11; 
int greenPin = 10; 
int bluePin = 9;

//Los declaramos como salidas
void setup() {
  pinMode(redPin, OUTPUT); 
  pinMode(greenPin, OUTPUT); 
  pinMode(bluePin, OUTPUT);
}

void loop() {
  setColor(255, 0, 0); // red 
  delay(1000);
  setColor(0, 255, 0); // green 
  delay(1000);
  setColor(0, 0, 255); // blue 
  delay(1000);
  setColor(255, 255, 0); // yellow 
  delay(1000);
  setColor(80, 0, 80); // purple 
  delay(1000);
  setColor(0, 255, 255); // aqua 
  delay(1000);
  setColor(193, 109, 17); // Indigo usando hex
  delay(1000);
  setColor(255, 255, 255); // white
  delay(1000);
}

/*
Esta funcion toma 3 argumentos, uno por cada nivel de brillo de los colores.
Estos varian de 0 a 255. Siendo 0 apagado y 255 maximo brillo. La funcion
analogWrite() es llamada para ajustar el brillo de cada led.
*/
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
