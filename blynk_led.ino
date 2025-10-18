#define BLYNK_TEMPLATE_ID "TMPL3iccg7X3Z"
#define BLYNK_TEMPLATE_NAME "LED"
#define BLYNK_AUTH_TOKEN "-oZVQD9zIJSiYHTR-ZmZVfUY_EJKBdDh"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Galaxy A05 95fd";
char pass[] = "Shilpa 54321";

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}