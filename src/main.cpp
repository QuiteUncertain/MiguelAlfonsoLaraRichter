#include <Arduino.h>

#define LED 2

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  Serial.println("Sistema ESP32 iniciado");
}

void loop() {
  digitalWrite(LED, HIGH);
  Serial.println("LED ENCENDIDO");
  delay(1000);

  digitalWrite(LED, LOW);
  Serial.println("LED APAGADO");
  delay(1000);
}
