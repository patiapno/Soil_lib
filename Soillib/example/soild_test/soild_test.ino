#include <moisture.h>

Soil_moisture soil(5,A0);
void setup() {
  Serial.begin(115200);
}

void loop() {
  float Soil=soil.getMoisture();
  Serial.println(Soil);
  delay(2*1000);
}
