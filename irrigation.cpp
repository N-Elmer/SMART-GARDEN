 irrigation.cpp
#include <Libraries/ActuatorLibrary/ActuatorLibrary.h>

void irrigate(ActuatorLibrary& actuator, float soilMoistureThreshold) {
  float soilMoisture = actuator.readSoilMoisture();

  if (soilMoisture  soilMoistureThreshold) {
    actuator.turnOnPump();
  } else {
    actuator.turnOffPump();
  }
}
