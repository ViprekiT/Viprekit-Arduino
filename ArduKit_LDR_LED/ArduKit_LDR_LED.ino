/*by VİPREKİT
 * 
 * A1 pinine bağlı olan LDR den analog veri alınıyor.
 * Bu veri 600 den büyükse Pin 6 (RGB Yeşil) ya bağlı 
 * olan Led sönüyor 600 den küçükse yanıyor.
 * Aynı zamanda bu veriler seriport ekranından 
 * gözlemlenebiliyor.
 * 
 * http://viprekit.com
 * 
 */



#define led 6

void setup() {

    pinMode(led,OUTPUT);
    Serial.begin(9600);

}

void loop() {

  int LDR = analogRead(A1);
  Serial.println(isik);
 
  if(LDR > 600){
    digitalWrite(led,LOW);
  }

  if(LDR < 601){
    digitalWrite(led,HIGH);
  }

}
