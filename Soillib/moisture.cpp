#include <Arduino.h>
#include "moisture.h"

float vol;
int pin;

Soil_moisture::Soil_moisture(float volate,int analog_pin)
{
	pin=analog_pin;
	vol=volate;
}
float Soil_moisture::getMoisture()
{
	if(vol==3.3)
	{
		//Serial.println("3.3V");
		float mois=analogRead(pin);
		mois*=100;
		mois/=700;
		return 100-(mois);
	}
	else if(vol==5)
	{
		//Serial.println("5V");
		float mois=analogRead(pin);
		mois*=100;
		mois/=1023;
		return 100-(mois);	
	}
}