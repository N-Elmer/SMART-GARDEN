// SensorLibrary.h
#ifndef SENSOR_LIBRARY_H
#define SENSOR_LIBRARY_H

class SensorLibrary {
public:
  void init();
  float readTemperature();
  float readHumidity();
  float readSoilMoisture();

private:
  // Private variables or functions if needed
};

#endif
