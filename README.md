# ESP32 LCD TFT Display Project

## Project Overview
This project demonstrates how to interface an ILI9341 TFT LCD display with an ESP32 microcontroller. The TFT display can be used to render graphics, text, and other visual elements, making it a great choice for creating user interfaces and displaying dynamic data.

## Components Needed
- ESP32 Microcontroller
- ILI9341 TFT LCD Display
- Jumper Wires
- Breadboard (optional)

## Block Diagram


## Circuit Setup
1. **Connecting the ILI9341 TFT LCD Display to ESP32:**
   - **TFT_CS (Chip Select):** Connect to GPIO pin 5 on the ESP32.
   - **TFT_RST (Reset):** Connect to GPIO pin 4 on the ESP32.
   - **TFT_DC (Data/Command):** Connect to GPIO pin 2 on the ESP32.
   - **TFT_MOSI (Master Out Slave In):** Connect to GPIO pin 23 on the ESP32.
   - **TFT_CLK (Clock):** Connect to GPIO pin 18 on the ESP32.
   - **TFT_MISO (Master In Slave Out):** Connect to GPIO pin 19 on the ESP32.
   - **VCC:** Connect to 3.3V or 5V power supply.
   - **GND:** Connect to ground.

## Instructions
1. **Setup:**
   - Include the `Adafruit_GFX` and `Adafruit_ILI9341` libraries in your sketch to manage the TFT display.
   - Define the pins used for the ILI9341 TFT display and create an instance of the `Adafruit_ILI9341` object.
   - In the `setup()` function, initialize the serial communication at a baud rate of 115200 and start the TFT display using `tft.begin()`.
   - Set the display rotation using `tft.setRotation()` and fill the screen with black using `tft.fillScreen(ILI9341_BLACK)`.
   - Set the text color and size using `tft.setTextColor()` and `tft.setTextSize()` respectively.

2. **Operation:**
   - In the `setup()` function:
     - Print "Hello, World!" at the top-left corner of the screen using `tft.println()`.
     - Draw a red rectangle on the screen using `tft.drawRect()`.

3. **Considerations:**
   - **Display Orientation:** Adjust the rotation of the display to suit your application's layout using `tft.setRotation()`.
   - **Power Supply:** Ensure the TFT display is properly powered for stable operation.
   - **Graphics Rendering:** Utilize the `Adafruit_GFX` library's functions to render more complex graphics and text.

## Applications
- **User Interfaces:** Create interactive interfaces for various applications.
- **Data Visualization:** Display real-time data, graphs, and other visual elements.
- **Information Display:** Show messages, status updates, and other information dynamically.

## Notes
- **Library Reference:** The `Adafruit_GFX` and `Adafruit_ILI9341` libraries provide a comprehensive set of functions for interfacing with TFT displays.
- **Serial Output:** Utilize the Serial Monitor for real-time debugging and monitoring of the displayed information.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 LCD TFT Display](https://projectslearner.com/learn/esp32-lcd-tft-display)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner
