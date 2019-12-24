/*by VİPREKİT
 * 
 * Pin 2 ye bağlı User Buton1 e basıldığında 
 * Pin 10 a bağlı olan Led (RGB Mavi) yanıyor.
 * Bu uygulamada RGB led in ortak VCC olduğuna
 * dikkat edilmelidir.
 * 
 * http://viprekit.com
 * 
 */


#define Buton 2
#define Led 10
void setup()
{
  pinMode(Buton, INPUT);
  pinMode(Led, OUTPUT);
}

void loop()
{
  //Buton Pull-Up
  if (digitalRead(Buton) == 0)
  digitalWrite(Led,HIGH);
  else
  digitalWrite(Led,LOW);
}
