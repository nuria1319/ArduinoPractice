#include <Wire.h>
#include <LiquidCrystal_12c.h>

LiquidCrystal_12c lcd(0x27,20,4);

void setup(){
  lcd.init();
  lcd.backlight();
}
void loop() {
  lcd.setCursor(0,1)
  lcd.print("HolaMundo");
}
