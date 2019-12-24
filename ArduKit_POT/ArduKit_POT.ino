/*by VİPREKİT
 * 
 * A0 pinine bağlı olan Potansiyometreden analog değer
 * okunarak seri porta yazdırılıyor. Analog okunan
 * değerleri seri porttan gözlemleyebiliyoruz.
 * Arduino idesinden "Araçlar" sekmesinde "Seri Çizici"yi
 * açtığımızda yine bu değerleri grafik şeklinde görmemiz
 * mümkün.
 * 
 * http://viprekit.com
 * 
 */

void setup() {
  
  Serial.begin(9600);
}
void loop() {
  int POT = analogRead(A0);
  Serial.println(POT);
  delay(1);        // Analog Okumanın stabil çalışması için
}
