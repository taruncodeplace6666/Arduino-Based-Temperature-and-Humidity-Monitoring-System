#include <DHT.h>

#define DHTPIN 2        // DHT22 DATA connected to Digital Pin 2
#define DHTTYPE DHT22   // Sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Sensor error");
  } 
  else {
    Serial.print("{\"temperature\":");
    Serial.print(temperature);
    Serial.print(",\"humidity\":");
    Serial.print(humidity);
    Serial.println("}");
  }

  delay(5000);  // Wait 5 seconds
}