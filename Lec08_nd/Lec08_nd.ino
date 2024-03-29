/*
Lec 8 - Controlar el brillo de cada uno de los colores de un LED RGB de manera 
independiente.

Reto - Cambia las funciones de los botones para que controlen el LED como si fuese 
un semaforo.
*/

//Los pines 9,10 y 11 del arduino son salidas PWM. 
int redLEDPin = 11; 
int greenLEDPin = 10; 
int blueLEDPin = 9;

int redSwitchPin = 7; 
int greenSwitchPin = 6; 
int blueSwitchPin = 5;

int red = 0; 
int blue = 0; 
int green = 0;

void setup() {
  pinMode(redLEDPin, OUTPUT); 
  pinMode(greenLEDPin, OUTPUT); 
  pinMode(blueLEDPin, OUTPUT); 
  
  pinMode(redSwitchPin, INPUT_PULLUP); 
  pinMode(greenSwitchPin, INPUT_PULLUP); 
  pinMode(blueSwitchPin, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(redSwitchPin) == LOW) {
    red++;
    if (red > 255) 
      red = 0; 
  }
  if (digitalRead(greenSwitchPin) == LOW) {
    green++;
    if (green > 255) 
      green = 0; 
  }
  if (digitalRead(blueSwitchPin) == LOW) {
    blue++;
    if (blue > 255) 
      blue = 0; 
  }
  analogWrite(redLEDPin, red); 
  analogWrite(greenLEDPin, green); 
  analogWrite(blueLEDPin, blue); 
  delay(10);
}
