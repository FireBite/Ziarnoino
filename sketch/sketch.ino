#define AIR_HUMIDITY 500
#define WATER_HUMIDITY 1000

void setup() {
    Serial.begin(9600);
    while(!Serial);    // time to get serial running
}

void loop() {
  unsigned short soilHumidityRaw = analogRead(7);
  unsigned short lightLevel = analogRead(8);
  unsigned short soilPhRaw = analogRead(9);
  
  Serial.print("R:");
  Serial.print(soilHumidityRaw);
  Serial.print(",");
  Serial.print(lightLevel);
  Serial.print(",");
  Serial.println(soilPhRaw);

  double soilHumidity = (soilHumidityRaw - AIR_HUMIDITY) / (SOIL_HUMIDITY - AIR_HUMIDITY);

  Serial.print("S:");
  Serial.println(soilHumidity);
  
  Serial.print("L:");
  Serial.println(lightLevel);
  
  delay(500);
}
