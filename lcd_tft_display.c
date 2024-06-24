/*
    Project name : ESP32 LCD TFT Display
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-lcd-tft-display
*/

#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

// Define pins for the ILI9341
#define TFT_CS   5
#define TFT_RST  4
#define TFT_DC   2
#define TFT_MOSI 23
#define TFT_CLK  18
#define TFT_MISO 19

// Create an instance of the ILI9341 display
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

void setup() 
{
  Serial.begin(115200);
  Serial.println("TFT LCD test");

  tft.begin();

  // Rotate display as needed (0-3)
  tft.setRotation(1);

  // Fill screen with black color
  tft.fillScreen(ILI9341_BLACK);

  // Set text color to white and text size to 2
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(2);

  // Print "Hello, World!" in the center of the screen
  tft.setCursor(0, 0);
  tft.println("Hello, World!");

  // Draw a red rectangle
  tft.drawRect(50, 50, 100, 50, ILI9341_RED);
}

void loop() {
  // Your loop code here
}
