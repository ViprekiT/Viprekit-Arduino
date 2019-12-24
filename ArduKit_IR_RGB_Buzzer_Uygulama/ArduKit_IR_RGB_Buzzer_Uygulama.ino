/*by VIPREKIT
 * 
 * Burada IR kumandadan gelen veriler ile 
 * (Up,Down,Left ve Right) butonları ile 
 * iki farklı fonksiyon çalıştırıldı.
 * 
 * Up ve Down ile zaman(t1) artırılıp azaltıldı
 * Right Left ile Fonksiyonlar arasında geçiş
 * yapıldı.
 * 
 * Fonksiyon1 RGB ledler ile basit bir animasyon 
 * oluşturuldu.
 * Fonksiyon2 de ise Buzzer yine t1 zamanı ile aktif
 * ve pasif yapılarak çalındı.
 * 
 */


#include <IRremote.h>

#define Up 0xFF18E7
#define Down 0xFF4AB5
#define Right 0xFF5AA5
#define Left 0xFF10Ef
#define Ok 0xFF38C7
#define Red 5
#define Green 6
#define Blue 10
#define Buzzer 9

int RECV_PIN = A5;
int t1 = 100;
int fonksiyon = 1;

IRrecv irrecv(RECV_PIN);
decode_results results;





void setup(){
pinMode(Red,OUTPUT);
pinMode(Green,OUTPUT);
pinMode(Blue,OUTPUT);
pinMode(Buzzer,OUTPUT);

irrecv.enableIRIn();

   digitalWrite(Red,HIGH);
   digitalWrite(Green,HIGH);
   digitalWrite(Blue,HIGH);
}

void loop(){

if (irrecv.decode(&results))
  {
    if (results.value == Up)
     {
      t1=t1+5;
     }
     else if (results.value == Down)
     {
      if(t1 > 5)
      t1=t1-5;
     }
     else if (results.value == Right)
     {
      fonksiyon = 1;
     }
     else if (results.value == Left)
     {
      fonksiyon = 2;
     }
     else{}
     irrecv.resume();
    }
  if(fonksiyon == 1){
    fonksiyon1(t1);
  }

  else if(fonksiyon == 2){
    fonksiyon2(t1);
  }
  else{}
  
 }


void fonksiyon1(int t1){
digitalWrite(Buzzer,LOW);
  
digitalWrite(Red,LOW);
digitalWrite(Green,HIGH);
digitalWrite(Blue,HIGH);
delay(t1);

digitalWrite(Red,HIGH);
digitalWrite(Green,LOW);
digitalWrite(Blue,HIGH);
delay(t1);

digitalWrite(Red,HIGH);
digitalWrite(Green,HIGH);
digitalWrite(Blue,LOW);
delay(t1);

}

void fonksiyon2(int t1){
  digitalWrite(Red,HIGH);
  digitalWrite(Green,HIGH);
  digitalWrite(Blue,HIGH);

  analogWrite(Buzzer,200);
  delay(t1);
  analogWrite(Buzzer,0);
  delay(t1);
  
  }
