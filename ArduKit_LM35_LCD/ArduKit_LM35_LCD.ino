/*by VIPREKIT
 * 
 * Bu uyglumada kit üzerinde bulunan LM35 sıcaklık
 * sensöründen sıcaklık alınarak yine kit üzerinde
 * bulunan LCD ekrana yazdırılmıştır.
 * 
 * NOT:LM35 sıcaklık sensörü derece başına 10 mV çıkış verir.
 * 1000 mV = 1 V
 * 
 * www.viprekit.com
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 4, 3, 8);
const int LM35 = A2;
float Voltage = 0;
float AnalogDeger = 0;
float Sicaklik = 0;
 
void setup() {
 
  lcd.begin(16,2);         
}
 
void loop() {
 

 AnalogDeger = analogRead(LM35);
 Voltage = (AnalogDeger/1023)*5000;
 Sicaklik = Voltage / 10.0;
 lcd.clear();
 lcd.print("Sicaklik");
 lcd.setCursor(0,1);
 lcd.print(Sicaklik);
 lcd.print("  C");
 delay(1000);
}
