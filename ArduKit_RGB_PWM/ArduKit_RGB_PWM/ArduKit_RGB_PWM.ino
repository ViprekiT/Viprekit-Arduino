
/*by VIPREKİT
 * 
 * R-->5  Kırmızı
 * G-->6  Yeşil
 * B-->10 Mavi
 * 
 * for döngüsü ile led parlaklıklarını değiştirerek
 * farklı renkler elde ediyoruz.
 * 
 * 
 * www.viprekit.com
 */

#define Red 5
#define Green 6
#define Blue 10


void setup() {
pinMode(Red,OUTPUT);
pinMode(Green,OUTPUT);
pinMode(Blue,OUTPUT);


analogWrite(Red,50);
analogWrite(Green,100);
analogWrite(Blue,150);
delay(2000);

}

void loop() {

  for(int i = 0 ; i < 256 ; i++){

    analogWrite(Red,i);
    analogWrite(Green,255-i);
    analogWrite(Blue,i/2);
    delay(20);
  }

}
