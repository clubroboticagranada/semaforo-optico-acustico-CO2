#include <Wire.h>
#include "ABlocks_LiquidCrystal_I2C.h"
#include "ABlocks_DHT.h"

double T;
double HR;

boolean b_Interruptor;

LiquidCrystal_I2C lcd(0x27,16,2);
byte lcd_customchar_0[8]={B01000,B10100,B01000,B00000,B00000,B00000,B00000,B00000};

DHT dht2(2,DHT22);

void mensaje_inicial() {
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print(String("Semaforo CO2"));
  lcd.setCursor(0, 1);
  lcd.print(String("optico-acustico"));
  delay(3000);
}

void tyHR() {
  T = dht2.readTemperature();
  HR = dht2.readHumidity();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(String("T = "));
  lcd.setCursor(4, 0);
  lcd.print(T);
  lcd.setCursor(10, 0);
  lcd.write((byte)0);
  lcd.setCursor(11, 0);
  lcd.print(String("C"));
  lcd.setCursor(0, 1);
  lcd.print(String("HR = "));
  lcd.setCursor(5, 1);
  lcd.print(HR);
  lcd.setCursor(11, 1);
  lcd.print(String("%"));
  delay(1000);
}

void setup()
{
  lcd.begin();lcd.noCursor();lcd.backlight();
lcd.createChar(0, lcd_customchar_0);
pinMode(7, INPUT);
pinMode(2, INPUT);
dht2.begin();
  lcd.backlight();
  mensaje_inicial();

}


void loop()
{

    b_Interruptor = digitalRead(7);
    if ((b_Interruptor == false)) {
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print(String("Interruptor en"));
      lcd.setCursor(4, 1);
      lcd.print(String("modo OFF"));
      delay(1000);

    } else {
      tyHR();

    }

}