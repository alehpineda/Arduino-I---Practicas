/*
Lec 06a - Entradas Digitales

Aqui haremos que al presionar un boton se prendan los leds
*/

int leds[]={4,5,6,7,8,9,10,11};
int push=3;
int tiempo=200;
int n=0;

void setup(){
  for(n=0;n<8;n++){
    pinMode(leds[n],OUTPUT);
  }
  pinMode(push,INPUT);
}

void flash(){
  for(n=0;n<8;n++){
    digitalWrite(leds[n],HIGH);
    delay(tiempo);
    digitalWrite(leds[n],LOW);
    delay(tiempo);
  }
}

void loop(){
  if(digitalRead(push)==HIGH){
    flash();
  }
}
