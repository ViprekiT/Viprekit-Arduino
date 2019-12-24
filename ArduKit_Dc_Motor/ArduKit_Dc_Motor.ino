/*by VIPREKIT
 * 
 * Kit üzerinde bulunan motor sürücü ile 
 * dc motor testi gerçekleştirilmiştir.
 * Kıt üzerinde motor pinleri aşağıda belirtilmiştir.
 * 
 * 
 * www.viprekit.com
 */

const int motorPin1  = 12; 
const int motorPin2  = 8; 

const int motorPin3  = 4; 
const int motorPin4  = 7; 

void setup(){
    
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);
    
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(2000); 
   
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(2000);
    
    
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(2000); 
    
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    delay(2000);    
    
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
}
void loop(){
  
}
