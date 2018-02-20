#include "Arduino.h"
class SensorData{
  public:
   //data
    double DataGroundTemperatureSensors[2];
    double BmeTemperature;
    double BmeHumidity;
    double BmePressure;
    int DataGroundGygrometer[4];
    //construct
    SensorData();
    //сбор данных со всех датчиков
    void calc();
    
  private:
    bool GroundTemperatureSensors(double *);//считывание данных с шины 1wire
    double temp(byte addr[8]);//считывание данных с одного датчика, сидяещего на 1wire
};

