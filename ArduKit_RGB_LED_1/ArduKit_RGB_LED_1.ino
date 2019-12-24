/*by VIPREKİT
 * 
 * Bu uygulamada RGB lerler 200ms aralıkla
 * sırası ile yakılıyor.
 * R-->5  Kırmızı
 * G-->6  Yeşil
 * B-->10 Mavi
 * 
 * 
 * www.viprekit.com
 */


const int Red = 5;
const int Green = 6;
const int Blue = 10;

void setup(){

pinMode(Red,OUTPUT);
pinMode(Green,OUTPUT);
pinMode(Blue,OUTPUT);

}

void loop(){
digitalWrite(Red,LOW);
digitalWrite(Green,HIGH);
digitalWrite(Blue,HIGH);
delay(200);

digitalWrite(Red,HIGH);
digitalWrite(Green,LOW);
digitalWrite(Blue,HIGH);
delay(200);

digitalWrite(Red,HIGH);
digitalWrite(Green,HIGH);
digitalWrite(Blue,LOW);
delay(200);



  
}
