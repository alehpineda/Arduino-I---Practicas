/*
Lec 10a - Sensar Luz.

De la leccion pasada solamente hay que cambiar el pot por un arreglo de 
fotoresistencia y resistencia.

Para variar la sensibilidad trata cambiando el valor del factor (57).
Incrementando este valor hara la lectura mas sensible.
*/

int lightPin = 0; 
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
  int reading =analogRead(lightPin);
  int numLEDSLit = reading / 57; //1023 / 9 / 2
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
