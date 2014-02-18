/*
Lec 09b - Usaremos el pot para controlar el numero de leds encendido.

Reto - modifica el codigo para nada mas encender un LED.
*/

int potPin = 0; 
int latchPin = 5; 
int clockPin = 6; 
int dataPin = 4;

int leds = 0;

void setup() {
  pinMode(latchPin, OUTPUT); 
  pinMode(dataPin, OUTPUT); 
  pinMode(clockPin, OUTPUT);
}

void loop() {
  int reading =analogRead(potPin);
  int numLEDSLit = reading / 114; //1023 / 9 
  leds = 0;
  //bitSet(leds, numLEDSLit);
  for (int i = 0; i < numLEDSLit; i++){
    bitSet(leds, i); 
  }
  updateShiftRegister(); 
}

void updateShiftRegister(){
  digitalWrite(latchPin, LOW); 
  shiftOut(dataPin, clockPin, LSBFIRST, leds); 
  digitalWrite(latchPin, HIGH);
}
