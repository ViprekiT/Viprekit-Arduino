/*by VİPREKİT
 * 
 * Burada LiquidCrystal.h kütüphanesi kullanılarak
 * lcd ekran uygulaması yapılmıştır.
 * Ekranda;
 * --------------------------
 * |        VIPREKIT        |
 * |         ARDUINO        |
 * --------------------------
 * yazısını göreceksiniz.LCD ekran switchinin açık
 * olduğundan emin olun.
 * 
 * Ayrıca Viprekit Arduino üzerinde LCD ekran
 * bağlantıları aşağıdaki gibidir. Buna dikkat ediniz.
 * 
 * RS---12
 * R/W--GND
 * E---11
 * D4---7
 * D5---4
 * D6---3
 * D7---8
 * 
 * 
 * http://viprekit.com
 * 
 */


#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 7, 4, 3, 8);//viprekit bağlı pinler

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(4, 0);
  lcd.print("VIPREKIT");
  lcd.setCursor(4, 1);
  lcd.print("ARDUINO");
}

void loop() {
}
