/*by VIPREKIT
 * 
 * Bu uygulamada kit üzerinde bulunan LM35 sıcaklık
 * sensöründen alınan sıcaklık değeri Serial porttan
 * gözlemlenmiştir.
 * 
 * NOT:LM35 sıcaklık sensörü derece başına 10 mV çıkış verir.
 * 1000mV = 1 V
 * 
 * www.viprekit.com
 */

const int LM35 = A2;
float Voltage = 0;
float AnalogDeger = 0;
float Sicaklik = 0;
 
void setup() {
 
  Serial.begin(9600);         
}
 
void loop() {
 

 AnalogDeger = analogRead(LM35);
 Voltage = (AnalogDeger/1023)*5000;
 Sicaklik = Voltage / 10.0;
 
 Serial.print("Sıcaklık: ");
 Serial.print(Sicaklik);
 Serial.println("\t°C");
 delay(1000);
}
