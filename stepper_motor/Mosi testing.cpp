#include <Arduino.h>

#define MOSI_PIN 26

void setup() {
    Serial.begin(115200);
    pinMode(MOSI_PIN, OUTPUT);
}

void loop() {
    digitalWrite(MOSI_PIN, HIGH);
    Serial.print("MOSI reads: ");
    Serial.println(digitalRead(MOSI_PIN));  // will read back its own output
    delay(1000);
}
