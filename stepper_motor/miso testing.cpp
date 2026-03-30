#include <Arduino.h>

#define MISO_PIN 25

void setup() {
    Serial.begin(115200);
    pinMode(MISO_PIN, INPUT);  // pure input, no pullup yet
}

void loop() {
    int val = digitalRead(MISO_PIN);
    Serial.print("MISO Pin 25 reads: ");
    Serial.println(val);
    delay(500);
}