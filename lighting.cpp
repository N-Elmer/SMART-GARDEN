// lighting.cpp
#include <Libraries/ActuatorLibrary/ActuatorLibrary.h>

void controlLighting(ActuatorLibrary& actuator, float lightIntensityThreshold) {
  float lightIntensity = actuator.readLightIntensity();

  if (lightIntensity < lightIntensityThreshold) {
    actuator.turnOnLight();
  } else {
    actuator.turnOffLight();
  }
}
