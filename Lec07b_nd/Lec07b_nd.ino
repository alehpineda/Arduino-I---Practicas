/*
Lec 07b - Controlaremos el brillo de los leds utilizando el pin 13 del CI 74HC595, llamado
OE output/enable. Este trabaja en bajo, quiere decir que utiliza logica negativa.
*/

int latchPin = 5; //pinAncla
int clockPin = 6; //pinReloj
int dataPin = 4; //pinDatos
int outputEnablePin = 3; //pin Habilitador

byte leds = 0;

void setup() {
  pinMode(latchPin, OUTPUT); 
  pinMode(dataPin, OUTPUT); 
  pinMode(clockPin, OUTPUT); 
  pinMode(outputEnablePin, OUTPUT);
}

void loop() {
  setBrightness(255); 
  leds = 0; 
  updateShiftRegister(); 
  delay(500);
  for (int i = 0; i < 8; i++) {
    bitSet(leds, i); 
    updateShiftRegister(); 
    delay(500);
  }
  for (byte b = 255; b > 0; b--) {
    setBrightness(b); 
    delay(50);
  } 
}

void updateShiftRegister(){
  digitalWrite(latchPin, LOW); 
  shiftOut(dataPin, clockPin, MSBFIRST, leds); 
  digitalWrite(latchPin, HIGH);
}

/*
La variable brightness varia de 0 to 255. Nos permite controlar el nivel de brillo
de los leds. Siendo 0 apagado y 255 el maximo brillo. SIN EMBARGO, en este caso 
utilizaremos logica negativa debido a que el pin trabaja en bajo.
*/
void setBrightness(byte brightness){ 
  analogWrite(outputEnablePin, 255-brightness); 
}
