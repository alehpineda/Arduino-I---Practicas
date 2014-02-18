/*
Lec 07a - 8 LEDs y el registro de corrimiento 74HC595

Aqui utilizaremos el CI 74HC595 para en lugar de utilizar 8 salidas del Arduino, 
utilizar solo 3.
Aqui utilizaremos dos funciones nuevas bitSet() y shiftOut()

bitSet(). Pone a uno un bit de una variable numérica.
-Sintaxis
  bitSet(x, n)
-Parámetros
  x: la variable numérica en la que está el bit a poner a uno
  n: cual de los bits queremos poner a uno, empezando en el 0 para el bit menos 
  significativo (el que está más a la derecha)
-Devuelve
  nada
  
shiftOut(). Desplaza un byte de datos bit a bit. Empieza desde el bit más 
significante (el de más a la izquierda) o el menos significante (el más a la 
derecha). Cada bit se escribe siguiendo su turno en un pin de datos, después de 
conmutar un pin de reloj (señal de reloj) para indicar que el bit está disponible.
  Esto es conocido como protocolo serie síncrono y es la forma común que utilizan 
los microcontroladores para comunicarse con sensores y con otros 
microcontroladores. Ambos dispositivos permanecen sincronizados, y se comunican 
a velocidades cercanas a las máximas, hasta que ambos compartan la misma linea de 
reloj. En la documentación del harware interno de los chips se hace referencia a 
menudo a esta característica como Serial Peripheral Interface (SPI).
-Sintaxis
  shiftOut(pinDatos, pinReloj, ordenBits, valor)
-Parametros
  pinDatos: el pin en el cual extraer cada bit (int)
  pinReloj: el pin que hay que conmutar cada vez que a un pinDatos le ha sido 
  enviado el valor correcto (int)
  ordenBits: en qué orden desplazar los bits; si hacia el MSBFIRST (bit más 
  significante primero) o hacia el LSBFIRST (bit menos significante primero).
  valor: los datos que rotar. (byte)
-Retorno
  Ninguno
**Nota
  El pinDatos y pinReloj deben estar ya configurados como salida con una llamada 
  previa a pinMode().
*/

int pinAncla = 5; 
int pinReloj = 6; 
int pinDatos = 4;

byte leds = 0;

void setup() {
  pinMode(pinAncla, OUTPUT); 
  pinMode(pinDatos, OUTPUT); 
  pinMode(pinReloj, OUTPUT);
}

void loop() {
  leds = 0; 
  actualizarRegistro(); 
  delay(500);
  for (int i = 0; i < 8; i++) {
    bitSet(leds, i);     
    actualizarRegistro(); 
    delay(500);
  } 
}

void actualizarRegistro(){
  digitalWrite(pinAncla, LOW); 
  shiftOut(pinDatos, pinReloj, LSBFIRST, leds);
  shiftOut(pinDatos, pinReloj, MSBFIRST, leds);
  digitalWrite(pinAncla, HIGH);
}
