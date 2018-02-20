#include "Arduino.h"
#include "SensorData.h"
class JsonRasberry
{
  public:
	JsonRasberry();	
	void calc(const SensorData &Sensor);
	void AddData(int ,int ,bool ,int ,int ,int ,int );
  private:
	int SoilMoistureMin;
    int SoilMoistureMax;
    
    bool light;
    
    int AirTemperatureMin;
    int AirTemperatureMax;
    
    int SoilTemperatureMin;
    int SoilTemperatureMax;
};