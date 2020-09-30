#include <Wire.h>
#include "ABlocks_LiquidCrystal_I2C.h"
#include <Adafruit_CCS811.h>

double CO2ppm;
double CO2ug_m3;
double VOC_ppb;

LiquidCrystal_I2C lcd(0x27,16,2);
CCS811 sensor_ccs811;
unsigned long sensor_ccs811_lastread=0;
double sensor_ccs811_co2_ppm=0.0;
double sensor_ccs811_co2_ugm3=0.0;
double sensor_ccs811_co2_tvoc_ppb=0.0;

double fnc_ccs811_data(int _type)
{
	double v=0.0;
	if((millis()-sensor_ccs811_lastread)>=250){
		//time elapsed since last call > 250ms
		if(sensor_ccs811.checkDataReady() == true){
			//update new values from sensor
			sensor_ccs811_co2_ppm=((double)sensor_ccs811.getCO2PPM());
			sensor_ccs811_co2_ugm3=((double)sensor_ccs811_co2_ppm*(double)1.8);
			sensor_ccs811_co2_tvoc_ppb=((double)sensor_ccs811.getTVOCPPB());
			sensor_ccs811_lastread=millis();
		}
		else{
			//error reading sensor, reset values...
			sensor_ccs811_co2_ppm=0.0;
			sensor_ccs811_co2_ugm3=0.0;
			sensor_ccs811_co2_tvoc_ppb=0.0;
		}
	}
	//return value
	if(_type==0)v=sensor_ccs811_co2_ppm;
	if(_type==1)v=sensor_ccs811_co2_tvoc_ppb;
	if(_type==2)v=sensor_ccs811_co2_ugm3;
	//reset sensor
	sensor_ccs811.writeBaseLine(0x847B);
	return v;
}

void CO2() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(String("CO2:"));
  lcd.setCursor(0, 1);
  lcd.print(String("CO2:"));
  CO2ppm = fnc_ccs811_data(0);
  lcd.setCursor(4, 0);
  lcd.print(CO2ppm);
  lcd.setCursor(10, 0);
  lcd.print(String("ppm"));
  CO2ug_m3 = fnc_ccs811_data(2);
  lcd.setCursor(4, 1);
  lcd.print(CO2ug_m3);
  lcd.setCursor(10, 1);
  lcd.print(String("ug/m3"));
  delay(2000);
  lcd.clear();
  lcd.setCursor(7, 0);
  lcd.print(String("VOC:"));
  VOC_ppb = fnc_ccs811_data(1);
  lcd.setCursor(4, 1);
  lcd.print(VOC_ppb);
  lcd.setCursor(10, 1);
  lcd.print(String("ppb"));
  delay(2000);
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
Serial.begin(9600);

sensor_ccs811.begin();
sensor_ccs811.setMeasCycle(sensor_ccs811.eCycle_250ms);
  lcd.backlight();
  mensaje_inicial();
  Serial.println(String("xx"));

}


void loop()
{

    CO2();

}