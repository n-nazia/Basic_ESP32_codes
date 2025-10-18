#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "Galaxy A13";
const char* password = "onetonine";

WebServer server(80);

void handleRoot() {
  server.send(200, "text/html",
              "<html><body style='text-align:center; font-size:30px; "
              "margin-top:20%;'>Hi everyone, Welcome to the IOT classes</body></html>");
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected! IP: " + WiFi.localIP().toString());

  server.on("/", handleRoot);
  server.begin();
}

void loop() {
  server.handleClient();
}