/*by VİPREKİT
 * 
 * Bu uygulamada kit üzerinde bulunan bluetooth modülü
 * ile setup ta "VipreKit Arduino" yazısını, loop ta  
 * ise "VipreKit" yazısını 1 saniye aralıklarla 
 * yazdırıyoruz.Bluetooth tan gelen verileri ise serial
 * ekrana göndererek gözlemliyoruz.
 * 
 * www.viprekit.com
 */

#include <SoftwareSerial.h>

SoftwareSerial viprekit_bluetooth(A3, A4);//RX TX

void setup()  
{
  Serial.begin(9600); 
  viprekit_bluetooth.begin(9600); 
  viprekit_bluetooth.println("VipreKit Arduino");
}

void loop()
{
  while(viprekit_bluetooth.available()){ 
    Serial.write(viprekit_bluetooth.read());
    delay(1);  
  }
  viprekit_bluetooth.println("VipreKit"); 
  delay(1000);
}
