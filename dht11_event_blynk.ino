#define BLYNK_TEMPLATE_ID "TMPL38mooRrB-"
#define BLYNK_TEMPLATE_NAME "DHT"
#define BLYNK_AUTH_TOKEN "Nhutzpxj-6kvLZPVBHhCoyegRsWHp8Tw"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include "DHT.h"

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Galaxy A05 95fd";     // your WiFi SSID
char pass[] = "Shilpa 54321";        // your WiFi password

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;

// Function to send sensor data
void sendSensor() {
  float temp = dht.readTemperature();
  float hum  = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Send data to Blynk app
  Blynk.virtualWrite(V1, temp);
  Blynk.virtualWrite(V2, hum);

  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" °C  |  Hum: ");
  Serial.print(hum);
  Serial.println(" %");

  // --- Trigger Events ---
  if (temp > 35) {
    Serial.println("High Temperature Alert!");
    Blynk.logEvent("high_temp", String("🔥 Temperature is ") + temp + " °C");
  }

  if (hum < 30) {
    Serial.println("Low Humidity Alert!");
    Blynk.logEvent("low_humidity", String("💧 Humidity is ") + hum + " %");
  }
}

void setup() {
  Serial.begin(115200);
  dht.begin();
  Blynk.begin(auth, ssid, pass);

  // Run sendSensor() every 2 seconds
  timer.setInterval(2000L, sendSensor);
}

void loop() {
  Blynk.run();
  timer.run();
}
