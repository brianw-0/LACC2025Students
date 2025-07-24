#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#define CONFIG_ESP_CONSOLE_USB_CDC

// Pin mappings
const int kLightSensorPin = 1;
const int kNeoPixelPin = 48;
const int kNeoPixelCount = 12;
Adafruit_NeoPixel LedRing(kNeoPixelCount, kNeoPixelPin);

// Variable for determining when light sensor is blocked or not (higher = darker)
const unsigned long kDarkDuration = 3000;   // Duration to stay dark (ms)

// Other variables
unsigned long darkStartTime = 0;
bool isDarkTimerRunning = false;
bool ledIsOn = false;

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

  // If the light sensor is dark
  if (/*YOUR CODE HERE*/) {
    // Turn on dark timer if timer not running yet
    if (/*YOUR CODE HERE*/) {
      darkStartTime = millis();  // This function records the current time in milliseconds
      isDarkTimerRunning = true;
    }

    // If the dark timer is on and no longer dark
    if (isDarkTimerRunning) {
      // Get the current time and whether we are dark for long enough
      unsigned long darkDuration = millis() - darkStartTime;
      if (darkDuration >= kDarkDuration) {

        // If led is on, turn it off
        if (/*YOUR CODE HERE*/) {
          /*YOUR CODE HERE*/
        } else {  // else if led is off, turn it on
          /*YOUR CODE HERE*/
        }
        
        // Reset the timer
        isDarkTimerRunning = false;

      }
    }

  }

  delay(100);
}