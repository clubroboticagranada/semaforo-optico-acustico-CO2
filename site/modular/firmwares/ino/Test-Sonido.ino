#include <Wire.h>
#include "ABlocks_LiquidCrystal_I2C.h"
#include <ABLocks_TimerFreeTone.h>

double ruido;

LiquidCrystal_I2C lcd(0x27,16,2);
String rtt_melody_5=":d=4,o=5,b=45:32p,32f#,32f#,32f#,8b.,8f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32c#6,8b.6,16f#.6,32e6,32d#6,32e6,8c#.6";

void mensaje_inicial() {
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print(String("Semaforo CO2"));
  lcd.setCursor(0, 1);
  lcd.print(String("optico-acustico"));
  delay(3000);
}

void Ruido() {
  ruido = analogRead(A0);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(String("Nivel de sonido:"));
  delay(300);
  if ((ruido > 30)) {
    lcd.setCursor(4, 1);
    lcd.print(ruido);
    TimerFreeToneRtttl(3,(const char *)rtt_melody_5.c_str());
    delay(500);
    lcd.setCursor(0, 1);
    lcd.print(String(""));

  }
}

void setup()
{
  lcd.begin();lcd.noCursor();lcd.backlight();
pinMode(A0, INPUT);
pinMode(3, OUTPUT);
  lcd.backlight();
  mensaje_inicial();

}


void loop()
{

    Ruido();

}