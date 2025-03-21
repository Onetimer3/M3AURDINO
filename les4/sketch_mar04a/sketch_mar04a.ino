  #include "DHT.h"
  #define DHTTYPE DHT11
  uint8_t DHTPin = D7;
  DHT dht(DHTPin, DHTTYPE);

  
  float Temperature, Humidity, HeatIndex;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  

}

void loop() {
  ReadDHT11();
  
  delay(6000);
}
