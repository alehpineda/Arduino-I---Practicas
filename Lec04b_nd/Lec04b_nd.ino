/*
Lec 04b - 8 LEDs prender y apagar en secuencia

Usaremos 8 pines para controlar 8 LEDs en diferentes configuraciones
*/
int t=250; //Delay de los LEDs

void setup(){
  for(int i=2;i<9;i++){
    pinMode(i,OUTPUT); //Usamos un for para no escribir tanto codigo
  }
}

void loop(){
  //Este for nos hace ir hacia adelante
  for(int i=2;i<9;i++){
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
  }
}
