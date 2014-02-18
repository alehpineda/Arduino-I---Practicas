/*
Lec 11a - Una escala sencilla.

Utilizaremos las funciones tone() y noTone()

tone() - Genera una onda cuadrada de la frecuencia especificada (y un 50% de 
ciclo de trabajo) en un pin. La duración puede ser especificada, en caso 
contrario la onda continua hasta que haya una llamada a noTone(). El pin puede 
conectarse a un zumbador piezoeléctrico u otro altavoz que haga sonar los 
tonos.
  Sólo puede generarse un tono cada vez. Si un tono está sonando en un pin 
diferente, la llamada a tone() no tendrá efecto. Si el tono está sonando en el 
mismo pin, la llamada establecerá la nueva frecuencia.
El uso de la función tone() interferirá con la salida PWM en los pins 3 y 11 (en 
otras placas distintas de la Mega).

NOTA: si quieres hacer sonar diferentes tonos en múltiples pins necesitas llamar 
a noTone() en un pin antes de llamar a tone() en el siguiente pin.

- Sintáxis

tone(pin, frecuencia) 
tone(pin, frecuencia, duracion)

- Parámetros

pin: el pin en el que generar el tono
frecuencia: la frecuencia del tono en hercios (Hz).
duracion: la duración del tono en milisegundos (opcional)

NOTA: las frecuencias audibles por el oído humano van de los 20Hz a los 20KHz 
por lo que el parámetro "frecuencia" debería estar comprendido entre estos dos 
valores.
- Retorno
  Ninguno
  
noTone() - Detiene la generación de la señal cuadrada que se activa al hacer 
uso de la función tone(). No tiene efecto si no se está generando ningún tono.

NOTA: si quieres generar tonos diferentes en múltiples pines , necesitas usar la 
función noTone() en el pin antes de llamar a la función tone() en el siguiente 
pin.

- Sintaxis
  noTone(pin)

- Parámetros
  pin: el pin en el cual se va a parar de generar el tono.

- Devuelve
  Nada
*/

int speakerPin = 12;
int numTones = 10;
int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440}; 
        // mid C C# D D# E F F# G G# A
        
void setup() {
  for (int i = 0; i < numTones; i++) {
    tone(speakerPin, tones[i]);
    delay(500); 
  }
  noTone(speakerPin); 
}

void loop() {
}
