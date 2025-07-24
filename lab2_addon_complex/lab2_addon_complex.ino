#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#define CONFIG_ESP_CONSOLE_USB_CDC

// Pin mappings
const int kLightSensorPin = 1;
const int kNeoPixelPin = 48;
const int kNeoPixelCount = 12;
Adafruit_NeoPixel LedRing(kNeoPixelCount, kNeoPixelPin);

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, real ESP32!");

  LedRing.begin();
  LedRing.setBrightness(16);
}

// Calling this function will turn on the LED array
void turnLedOn() {
  for (int i = 0; i < kNeoPixelCount; i++) {
    LedRing.setPixelColor(i, LedRing.Color(0, 150, 0));
  }
  LedRing.show();
  ledIsOn = true;
}

// Calling this function will turn off the LED array
void turnLedOff() {
  for (int i = 0; i < kNeoPixelCount; i++) {
    LedRing.setPixelColor(i, LedRing.Color(0, 0, 0));
  }
  LedRing.show();
  ledIsOn = false;
}

void loop() {
  int sensorValue = analogRead(kLightSensorPin);
  Serial.print("Sensor: ");
  Serial.println(sensorValue);

  // YOUR CODE HERE...
  // Idea is that when someone moves their hand over the light sensor twice
  //  it toggles the LED array on and off
  // You may find it useful to use the millis() function (google it...)


  delay(100);
}