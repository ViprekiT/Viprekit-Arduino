/*by VİPREKİT
 * 
 * Pin 9 a bağlı olan buzzer.
 * analogWrite ile 50ms aralıkla aktif ve pasif
 * yapılıyor.
 * Burada direk olarak 5v vermeyip, sesi daha net
 * alabilmek için analogWrite ile (200)(PWM) gönderiyoruz.
 * Küçük bir hesap yapacak olursak.
 * 255 --->5V ise
 * 200 --->3,92V uygulamış oluyoruz.
 * 
 * http://viprekit.com
 */

#define Buzzer 9

void setup() {
  pinMode(Buzzer,OUTPUT);
  
}

void loop() {
  analogWrite(Buzzer,200);
  delay(50);
  analogWrite(Buzzer,0);
  delay(50);

}
