#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#define CONFIG_ESP_CONSOLE_USB_CDC

// Pin mappings
const int kLightSensorPin = 1;
const int kNeoPixelPin = 48;

const int kNeoPixelCount = 12;
Adafruit_NeoPixel LedRing(kNeoPixelCount, kNeoPixelPin);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, real ESP32!");

  LedRing.begin();
  LedRing.setBrightness(16);
}

// Calling this function will turn on the LED array
void turnLedOn() {
  for (int i=0; i<kNeoPixelCount; i++) {
    LedRing.setPixelColor(i, LedRing.Color(0, 150, 0));
  }
  LedRing.show();
}

// Calling this function will turn off the LED array
void turnLedOff() {
  for (int i = 0; i < kNeoPixelCount; i++) {
    LedRing.setPixelColor(i, LedRing.Color(0, 0, 0)); // Turn off
  }
  LedRing.show();
}

void loop() {
  int sensorValue = analogRead(kLightSensorPin);
  Serial.println(sensorValue);

  // YOUR CODE HERE
  // Depending on the sensorValue you get, you should turn the led on or off.
  //  Higher values mean the light sensor is darker
  //  The functions for turning leds on/off have already been provided.



  // END YOUR CODE

  delay(200);
}