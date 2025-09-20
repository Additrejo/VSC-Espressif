#include <Arduino.h>

const int ledPin = 2; // GPIO2, LED integrado en la mayoría de ESP32 DEVKIT DOIT

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // Enciende el LED
  delay(500);                // Espera 1 segundo
  digitalWrite(ledPin, LOW);  // Apaga el LED
  delay(500);                // Espera 1 segundo
}
