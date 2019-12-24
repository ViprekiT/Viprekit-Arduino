/*by VIPREKİT
 * 
 * Bu uygulamada iki adet buton ile 10.pin e bağlı LED
 * nin parlaklığı artırılıp azaltılmıştır.
 * 
 * www.viprekit.com
 */

#include <LiquidCrystal.h>

#define btn1 2
#define btn2 13
#define LED 10

LiquidCrystal lcd(12, 11, 7, 4, 3, 8);
uint8_t Parlaklik = 100;

void setup() {
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(LED,OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Parlaklik");

}

void loop() {
  if(digitalRead(btn1)==1){
    delay(100);
   if(Parlaklik != 0)
   Parlaklik = Parlaklik-5;
  }
  
  else if (digitalRead(btn2)==1)
  {
    delay(100);
    if(Parlaklik != 255)
      Parlaklik = Parlaklik+5;
    }
  else{}
  lcd.clear();
  lcd.print("Parlaklik");
  lcd.setCursor(0,1);
  lcd.print(Parlaklik);
  analogWrite(LED,255-Parlaklik);//Ortak VCC olduğu için
  delay(10);
   

  
}
