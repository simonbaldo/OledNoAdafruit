#include <Arduino.h>
#include <Wire.h> //sda ed scl implicitamente collegati ad a4 ed a5
//#include <Adafruit_GFX.h>
//#include <Adafruit_SSD1306.h>
#include <SoftwareSerial.h>
//#include "SSD1306Ascii.h"   
//#include "SSD1306AsciiAvrI2c.h" 
//#include <SPI.h>
#include "SSD1306Ascii.h"
#include "SSD1306AsciiAvrI2c.h"

SoftwareSerial ss(3,4);

// pin definitions
//#define CS_PIN  7
//#define RST_PIN 8
//#define DC_PIN  9
/*
const char* fontName[] = {
  "Arial14",
  "Arial_bold_14",
  "Callibri11",
  "Callibri11_bold",
  "Callibri11_italic",
  "Callibri15",
  "Corsiva_12",
  "fixed_bold10x15",
  "font5x7",
  "font8x8",
  "Iain5x7",
  "lcd5x7",
  "Stang5x7",
  "System5x7",
  "TimesNewRoman16",
  "TimesNewRoman16_bold",
  "TimesNewRoman16_italic",
  "utf8font10x16",
  "Verdana12",
  "Verdana12_bold",
  "Verdana12_italic",
  "X11fixed7x14",
  "X11fixed7x14B",
  "ZevvPeep8x16" 
};
const uint8_t* fontList[] = {
  Arial14,
  Arial_bold_14,
  Callibri11,
  Callibri11_bold,
  Callibri11_italic,
  Callibri15,
  Corsiva_12,
  fixed_bold10x15,
  font5x7,
  font8x8,
  Iain5x7,
  lcd5x7,
  Stang5x7,
  System5x7,
  TimesNewRoman16,
  TimesNewRoman16_bold,
  TimesNewRoman16_italic,
  utf8font10x16,
  Verdana12,
  Verdana12_bold,
  Verdana12_italic,
  X11fixed7x14,
  X11fixed7x14B,
  ZevvPeep8x16
};
*/
//uint8_t nFont = sizeof(fontList)/sizeof(uint8_t*);

SSD1306AsciiAvrI2c oled;
//------------------------------------------------------------------------------
void setup() {
  //Serial.begin(9600);
  //Serial.println("entro");
  // Use next line if no RST_PIN or reset is not required.  
  // oled.begin(&Adafruit128x64, CS_PIN, DC_PIN);  
  //oled.begin(&Adafruit128x64, CS_PIN, DC_PIN, RST_PIN);
  oled.begin(&Adafruit128x64, 0x3C);
  //Serial.println("dopo");

  oled.clear();
  oled.setFont(Callibri14);
  oled.setCursor(50,0);
  //oled.setRow(30);
  //oled.print("ciao Simone");
    oled.write("ciao Simone");
  oled.setCursor(0,2);
   oled.write("Bondi");
   oled.set1X();
   oled.write("Bondi");
  delay (3000);
/*
  for (uint8_t i = 0; i < nFont; i++) {
    oled.setFont(System5x7);
    oled.clear();
    oled.println(fontName[i]);
    oled.println();  
    oled.setFont(fontList[i]);
    oled.println("*+,-./0123456789:");
    oled.println("abcdefghijklmno");
    oled.println("ABCDEFGHIJKLMNO");
    //Serial.println(i);
    delay(5000);    
  }
  oled.clear();
  oled.print("Done!");
  */
}
void loop() {}
