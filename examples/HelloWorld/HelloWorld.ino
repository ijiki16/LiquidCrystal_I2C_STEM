#include <LiquidCrystal_I2C_STEM.h>

LiquidCrystal_I2C_STEM lcd(0x27, 16, 2);  // set the LCD address to 0x27 for a 20 chars and 4 line display

void setup() {
    lcd.init();       // initialize the lcd
    lcd.backlight();  // Set backlight on

    // Print a message to the LCD.
    lcd.setCursor(2, 0);
    lcd.print("Hello, world!");
    lcd.setCursor(0, 1);
    lcd.print("Arduino Display!");
}

void loop() {
}
