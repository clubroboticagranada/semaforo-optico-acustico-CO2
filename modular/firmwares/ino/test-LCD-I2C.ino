#include <Wire.h>
#include "ABlocks_LiquidCrystal_I2C.h"

LiquidCrystal_I2C lcd(0x27,16,2);

void test_lcd() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(String("Prueba pantalla"));
  lcd.setCursor(2, 1);
  lcd.print(String("LCD I2C 1602"));
  delay(3000);
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print(String("Semaforo CO2"));
  lcd.setCursor(0, 1);
  lcd.print(String("optico-acustico"));
  delay(3000);
}

void setup()
{
  lcd.begin();lcd.noCursor();lcd.backlight();
  lcd.backlight();

}


void loop()
{

    test_lcd();

}