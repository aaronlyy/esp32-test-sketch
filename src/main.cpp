#include <Arduino.h>
#include <WiFi.h>

void setup() {
  Serial.begin(921600);
  WiFi.softAP("Test AP", "testing12345");
  IPAddress ip = WiFi.softAPIP();
  Serial.println(ip);

}

void loop() {
  Serial.println("Running...");
  delay(1000);
}