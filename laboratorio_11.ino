
char tecla;
int led1=11;
int led2=12;
int led3=13;
void setup(){
 Serial.begin(9600);
 Serial.println("Comandos:");
 Serial.println("(1) Encender led verde");
 Serial.println("(2) Apagar led verde");
 Serial.println("(3) Encender led rojo");
 Serial.println("(4) Apagar led rojo");
 Serial.println("(5) Encender led amarillo");
 Serial.println("(6) Apagar led amarillo");
 Serial.println("(7) Encender todos los leds");
 Serial.println("(8) Apagar todos los leds");
 Serial.println("(9) Leds en modo intermitente");
 Serial.println("Digite un numero");
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
  
}

void loop(){
 
  tecla=Serial.read();
  
 if(tecla == '1'){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
   
 }else if(tecla == '2'){
   digitalWrite(led1, LOW);
   
  }else if(tecla == '3'){
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
   
   }else if(tecla == '4'){
     digitalWrite(led2, LOW);
   
    }else if(tecla == '5'){
      digitalWrite(led3, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led1, LOW);
   
     }else if(tecla == '6'){
       digitalWrite(led3, LOW);
   
      }else if(tecla == '7'){
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
   
       }else if(tecla == '8'){
         digitalWrite(led1, LOW);
         digitalWrite(led2, LOW);
         digitalWrite(led3, LOW);
        }
   while(tecla=='9'){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(500);
    if(Serial.available()>0){
     tecla=Serial.read();
    }
   }
       
   
  

}