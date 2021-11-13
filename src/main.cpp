#include <WiFi.h>
#include <WiFiClient.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include "Pass.h"
#include "Server.cpp"
#include "OTA.cpp"

void setup(void) {
  Serial.begin(115200);

  WiFi.begin(config.ssid, config.password);
  Serial.println("");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(config.ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  start_server();
  ota_start();
}

void loop(void) {
  server.handleClient();
  //ArduinoOTA.handle();
}