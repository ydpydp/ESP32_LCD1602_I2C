//YWROBOT
//Compatible with the Arduino IDE 2.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{ 
  lcd.begin(SDA, SCL); //initialize 1602  LiquidCrystal_I2C::begin(int8_t sda, int8_t scl) 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello, world!");
  lcd.setCursor(0,1);
  lcd.print("by EasyIoT");
}


void loop()
{
}
