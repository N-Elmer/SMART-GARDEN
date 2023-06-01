// SmartGarden.ino
#include <Libraries/SensorLibrary/SensorLibrary.h>
#include <Libraries/ActuatorLibrary/ActuatorLibrary.h>

SensorLibrary sensor;
ActuatorLibrary actuator;

void setup() {
  sensor.init();
  actuator.init();
}

void loop() {
  float temperature = sensor.readTemperature();
  float humidity = sensor.readHumidity();
  float soilMoisture = sensor.readSoilMoisture();

  if (temperature > 25.0) {
    actuator.turnOnFan();
  } else {
    actuator.turnOffFan();
  }

  if (humidity < 50.0) {
    actuator.turnOnMister();
  } else {
    actuator.turnOffMister();
  }

  if (soilMoisture < 30.0) {
    actuator.turnOnPump();
  } else {
    actuator.turnOffPump();
  }

  delay(1000);
}