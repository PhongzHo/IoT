#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16,2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Dong Thu 1");
  lcd.setCursor(0,1);
  lcd.print("Dong Thu 2");
}

void loop() {
  // put your main code here, to run repeatedly:

}
