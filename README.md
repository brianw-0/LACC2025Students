# LACC 2025 Embedded Systems Day 1 Labs

This repository contains the skeleton code for LACC students.  To explain some of the different files/folders:
- **lab1_cpp.md** contains a set of starter problems for getting to know C++
- **lab2** folder contains skeleton code for turning on the device LEDs when the light sensor is covered.
- **lab2_addon** folder contains skeleton code for a more complex version of lab2, where you must block the light sensor twice in order to turn the LEDs on/off.


## ESP32-S3 Arduino IDE Setup Guide

Follow these steps to install the Arduino IDE, add ESP32 board support, and select the ESP32-S3 board.

---

### 1. Install (or update) the Arduino IDE

1. Go to the [Arduino Software page](https://arduino.cc/en/software).  
2. Download the latest Arduino IDE for your operating system (Windows/macOS/Linux).  
3. Install and launch the Arduino IDE.

---

### 2. Add ESP32 board support

1. **Open Preferences**  
   - In the Arduino IDE, navigate to **File → Preferences**.  
2. **Add the ESP32 URL**  
   - Find the field labeled **Additional Boards Manager URLs**.  
   - Add the following URL:  
     ```text
     https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
     ```
   - Click **OK** to save.
3. **Install ESP32 cores**  
   - Go to **Tools → Board → Boards Manager…**  
   - In the search box, type **esp32**.  
   - Locate **esp32 by Espressif Systems** and click **Install**.  
   - Wait for the installation to finish.

---

### 3.  Install Libraries

1. Open the Library Manager: **main menu > Tools > Manage Libraries...**  

2. The Library Manager will show up on the left panel (where the Boards Manager was).
   In the search box, enter `Adafruit Neopixel`, and click install on **Adafruit NeoPixel** by Adafruit  
   - This may take a while
  
---

### 4. Select the ESP32-S3 Board

1. **Choose your board**  
   - Go to **Tools → Board → ESP32 Arduino → ESP32S3 Dev Module**  
   - This option covers the ESP32-S3 WROOM and most S3 variants.
2. **Set Upload Speed**  
   - Under **Tools → Upload Speed**, select **115200** (or higher, e.g., 230400).
3. **Select the correct Port**  
   - Under **Tools → Port**, choose the COM (or `/dev/ttyUSB*`) port associated with your ESP32-S3 module.

---

### 5. Enable OPI PSRAM

1. **Tools** -> **PSRAM** -> **OPI PSRAM**

### 6. Open Code and Upload

1. **Open the corresponding .ino file you wish to upload to the device** 
2. **Upload file into ESP32 board**
3. **You can also use Tools -> Serial Monitor to see what the device is printing out (e.g. light sensor readings).  Just make sure your baud rate is the same as serial speed set in the code (i.e. 115200) otherwise you'll just get gibberish**

---
