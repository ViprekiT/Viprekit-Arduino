/*by VİPREKİT
 * 
 * IR alıcı sensörü A5 pinine bağlıdır.
 * Burada IRremote.h kütüphanesi ile 
 * IR alıcı sensörün okuduğu HEX kodları
 * seri porttan gözlemlenebilmektedir.
 * Burada kumandanın kodlarını kaydederek
 * diğer uygulamalarınızda kullanabilirsiniz.
 * 
 * http://viprekit.com
 */

#include <IRremote.h>

int RECV_PIN = A5;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
 
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
