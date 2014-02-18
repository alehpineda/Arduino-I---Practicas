/*
Lec 04A - 8 LEDs predidos y luego apagados

Usaremos 8 pines para controlar 8 LEDs en diferentes configuraciones
*/
int t=500; //Delay de los LEDs

void setup(){
  for(int i=4;i<12;i++){
    pinMode(i,OUTPUT); //Usamos un for para no escribir tanto codigo
  }
}

void loop(){
  for(int i=4;i<12;i++){
    digitalWrite(i, HIGH); //Usamos un for para no escribir tanto codigo
  }
  delay(t);
  for(int i=4;i<12;i++){
    digitalWrite(i, LOW); //Usamos un for para no escribir tanto codigo
  }
  delay(t);
}
