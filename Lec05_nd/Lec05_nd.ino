/*
Lec 05 - Monitor serial

Prenderemos y apagaremos los leds utilizando el monitor serial
Para este ejemplo los leds estan del pin 2 al 8
*/
int t=100; //Delay de los LEDs

void setup(){
  for(int i=2;i<9;i++){
    pinMode(i,OUTPUT); //Usamos un for para no escribir tanto codigo
  }
  Serial.begin(9600); //Abrimos el puerto serie a 9600 baudios
  while(!Serial);
  //Escribimos un mensaje
  Serial.println("Escribe el numero de led que quieres prender o 'x' si quieres apagarlos");  
}

void loop(){
  if(Serial.available()){
    char ch= Serial.read(); //lo que mandemos al monitor se guardara en esta variable, como tipo char
    if(ch>='2' && ch<='8'){
      int led=ch-'0';//Al restar dos caracteres obtenemos su resultado en ascii y lo guardamos como int.
      switch(led){
       case 2: digitalWrite(led,HIGH);       
       break;
       case 3: digitalWrite(led,HIGH);
       break;
       case 4: digitalWrite(led,HIGH);
       break;
       case 5: digitalWrite(led,HIGH);
       break;
       case 6: digitalWrite(led,HIGH);
       break;
       case 7: digitalWrite(led,HIGH);
       break;
       case 8: digitalWrite(led,HIGH);
       break;       
      }
       Serial.print("Prendiste el LED ");
       Serial.println(ch);
    }
    else if(ch=='x'){
      for(int i=2;i<9;i++){
        digitalWrite(i, LOW);
      }
      Serial.println("Apagados");
    }
    else{
      Serial.println("Ingresa un valor valido");
    }
  }
}
