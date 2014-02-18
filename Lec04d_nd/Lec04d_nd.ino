/*
Lec 04d - 8 LEDs Efecto auto increible, con efecto mejorado

Usaremos 8 pines para controlar 8 LEDs en diferentes configuraciones
*/
int t=100; //Delay de los LEDs

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
    digitalWrite(i+1, HIGH); //Prendemos el siguiente led
    delay(t);
    digitalWrite(i, LOW);//apagamos el led anterior
  }
  //Este for nos hace ir hacia atras
  for(int i=8;i>=2;i--){
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i-1, HIGH);
    delay(t);    
    digitalWrite(i, LOW);    
  }
  delay(t*2); //Doblamos el tiempo de espera
}
