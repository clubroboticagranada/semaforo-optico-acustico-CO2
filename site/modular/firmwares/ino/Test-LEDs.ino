#include <Wire.h>
#include "ABlocks_LiquidCrystal_I2C.h"

LiquidCrystal_I2C lcd(0x27,16,2);

void mensaje_inicial() {
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print(String("Semaforo CO2"));
  lcd.setCursor(0, 1);
  lcd.print(String("optico-acustico"));
  delay(3000);
}

void Verde() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(String("Color: VERDE"));
  digitalWrite(4, HIGH);
}

void Amarillo() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(String("Color: AMARILLO"));
  digitalWrite(5, HIGH);
}

void Rojo() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(String("Color: ROJO"));
  digitalWrite(6, HIGH);
}

void setup()
{
  lcd.begin();lcd.noCursor();lcd.backlight();
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
  lcd.backlight();
  mensaje_inicial();
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

}


void loop()
{

    for (int count = 0; count < 3; count++) {
      Verde();
      delay(3000);
      digitalWrite(4, LOW);
      Amarillo();
      delay(3000);
      digitalWrite(5, LOW);
      Rojo();
      delay(3000);
      digitalWrite(6, LOW);
    }
    mensaje_inicial();

}