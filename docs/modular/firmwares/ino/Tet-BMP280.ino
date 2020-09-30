#include <Wire.h>
#include "ABlocks_LiquidCrystal_I2C.h"
#include <Adafruit_BMP280.h>

double P;
double Altitud;
double T_BMP;

LiquidCrystal_I2C lcd(0x27,16,2);
byte lcd_customchar_0[8]={B01000,B10100,B01000,B00000,B00000,B00000,B00000,B00000};

byte lcd_customchar_1[8]={B00100,B00100,B00100,B00100,B10101,B10101,B01110,B00100};

Adafruit_BMP280 bmp280;

void Barometro() {
  P = (bmp280.readPressure()/100.0);
  Altitud = bmp280.readAltitude();
  T_BMP = bmp280.readTemperature();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(String("P="));
  lcd.setCursor(2, 0);
  lcd.print(P);
  lcd.setCursor(8, 0);
  lcd.print(String("mb"));
  lcd.setCursor(0, 1);
  lcd.print(String("Alt="));
  lcd.setCursor(4, 1);
  lcd.print(Altitud);
  lcd.setCursor(10, 1);
  lcd.print(String("m"));
  lcd.setCursor(10, 0);
  lcd.print(String(" /T"));
  lcd.setCursor(15, 0);
  lcd.write((byte)1);
  lcd.setCursor(12, 1);
  lcd.print(T_BMP);
  lcd.setCursor(13, 0);
  lcd.write((byte)0);
  lcd.setCursor(14, 0);
  lcd.print(String("C"));
  delay(20000);
}

void mensaje_inicial() {
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
lcd.createChar(0, lcd_customchar_0);
lcd.createChar(1, lcd_customchar_1);
bmp280.begin();
bmp280.setSampling(Adafruit_BMP280::MODE_NORMAL,Adafruit_BMP280::SAMPLING_X2,Adafruit_BMP280::SAMPLING_X16,Adafruit_BMP280::FILTER_X16,Adafruit_BMP280::STANDBY_MS_500);
  lcd.backlight();
  mensaje_inicial();

}


void loop()
{

    Barometro();

}