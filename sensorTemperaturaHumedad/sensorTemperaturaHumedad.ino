#include <DHT.h>

#define DHTPIN 7
#define DHTTYPE DHT11
  DHT dht(DHTPIN,DHTTYPE);
 void setup() {
  
  Serial.begin(9600);
  
 }
void loop() {
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  Serial.print("Humedad: ");
  Serial.print(h);
  delay (2500);
  Serial.print("Temperatura: ");
  Serial.print(t);
  delay (2500);

}