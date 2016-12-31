#include <Arduino.h>

class Soil_moisture
{
	public:
		Soil_moisture(float volate,int analog_pin);
		float getMoisture();
};