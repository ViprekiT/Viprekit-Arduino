/*by VIPREKIT
 * 
 * Pin 13 e bağladığımız ledi digitalWrite ile
 * HIGH ve LOW yaparak 1sn yakıp 1sn söndürüyoruz.
 * LED Blink
 * 
 * http://viprekit.com
 */


#define LED 13

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);   
  delay(1000);                     
  digitalWrite(LED, LOW);    
  delay(1000);  
}
