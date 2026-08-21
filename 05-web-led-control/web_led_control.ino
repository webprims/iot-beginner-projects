#include <WiFi.h>
#include <WebServer.h>

const char* WIFI_SSID = "YOUR_WIFI_NAME";
const char* WIFI_PASSWORD = "YOUR_WIFI_PASSWORD";
const int LED_PIN = 2;

WebServer server(80);

String page() {
  return R"rawliteral(
  <!doctype html>
  <html>
    <body style='font-family:Arial;text-align:center;padding:40px'>
      <h1>ESP32 LED Control</h1>
      <p><a href='/on'><button style='padding:12px 24px'>Turn ON</button></a></p>
      <p><a href='/off'><button style='padding:12px 24px'>Turn OFF</button></a></p>
    </body>
  </html>
  )rawliteral";
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("Open: http://");
  Serial.println(WiFi.localIP());

  server.on("/", []() { server.send(200, "text/html", page()); });
  server.on("/on", []() {
    digitalWrite(LED_PIN, HIGH);
    server.sendHeader("Location", "/");
    server.send(302);
  });
  server.on("/off", []() {
    digitalWrite(LED_PIN, LOW);
    server.sendHeader("Location", "/");
    server.send(302);
  });

  server.begin();
}

void loop() {
  server.handleClient();
}
