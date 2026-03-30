#include <Arduino.h>
#include <SPI.h>

#define SCK_PIN 27
#define MISO_PIN 25
#define MOSI_PIN 26
#define CS_PIN 33

void setup() {
    Serial.begin(115200);

    SPI.begin(SCK_PIN, MISO_PIN, MOSI_PIN, CS_PIN);

    pinMode(CS_PIN, OUTPUT);
    digitalWrite(CS_PIN, HIGH);

    Serial.println("SPI Send/Receive Test...");
}

void loop() {
    digitalWrite(CS_PIN, LOW);

    uint8_t received = SPI.transfer(0xAA);  // send dummy byte

    digitalWrite(CS_PIN, HIGH);

    Serial.print("Received: ");
    Serial.println(received, HEX);

    delay(1000);
}
