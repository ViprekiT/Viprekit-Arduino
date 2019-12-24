/*by VIPREKIT
 * 
 * Menu uygulaması yapılmıştır.
 * Buton kullanarak geçişlerle:
 *  LDR (ışık şiddeti)
 *  LM35(sıcaklık)
 *  POT(potansiyometre)
 *  IR (IR Buton Kodları)
 * değerleri alınıp LCD ekrana yazılmıştır.
 * www.viprekit.com
 */

#include <IRremote.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 4, 3, 8);
#define LM35 A2
#define LDR A1
#define POT A0
#define IR A5
#define btn1 2
#define btn2 13

int gecis = 1 ;
int ldr = 0 ;
float Voltage = 0;
float AnalogDeger = 0 ;
float Sicaklik = 0;
int Pot = 0 ;
IRrecv irrecv(IR);
decode_results results;

void setup() {
 pinMode(LDR,INPUT);
 pinMode(LM35,INPUT);
 pinMode(POT,INPUT);
 pinMode(btn1,INPUT);
 pinMode(btn2,INPUT);

 irrecv.enableIRIn();
 lcd.begin(16,2);
}

void loop() {
if(digitalRead(btn1)==1){
    delay(200);
   if(gecis == 4)
   gecis = 1;
   else if(gecis ==3){
   lcd.clear();
   gecis++;
   }
   else
   gecis++;
  }
  
  else if (digitalRead(btn2)==1)
  {
    delay(200);
    if(gecis == 1){
      gecis = 4;
      lcd.clear();
    }
    else
      gecis--;  
    }
  else{} 

if(gecis==1)
_isik();
else if(gecis==2)
_sicaklik();
else if(gecis==3)
_pot();
else if(gecis==4){
_ir();
}
else{}

}
void _isik(){
 ldr =analogRead(LDR);
 lcd.clear();
 lcd.print("LDR");
 lcd.setCursor(0,1);
 lcd.print(ldr);
 delay(100); 
}

void _sicaklik(){
  AnalogDeger = analogRead(LM35);
 Voltage = (AnalogDeger/1023)*5000;
 Sicaklik = Voltage / 10.0;
 lcd.clear();
 lcd.print("Sicaklik");
 lcd.setCursor(0,1);
 lcd.print(Sicaklik);
 lcd.print(" C");
 delay(100);
}

void _pot(){
  Pot=analogRead(POT);
  lcd.clear();
  lcd.print("POT");
  lcd.setCursor(0,1);
  lcd.print(Pot);
  delay(100);
}

void _ir(){
     lcd.setCursor(0,0);  
     lcd.print("IR RECEIVE");
     
  if (irrecv.decode(&results)) {
    lcd.clear();
    lcd.print("IR RECEIVE");
    lcd.setCursor(0,1);
    lcd.print(results.value, HEX);
    irrecv.resume();
  }
  delay(100);
}
