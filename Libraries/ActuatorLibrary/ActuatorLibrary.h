// ActuatorLibrary.h
#ifndef ACTUATOR_LIBRARY_H
#define ACTUATOR_LIBRARY_H

class ActuatorLibrary {
public:
  void init();
  void turnOnFan();
  void turnOffFan();
  void turnOnMister();
  void turnOffMister();
  void turnOnPump();
  void turnOffPump();

private:
  // Private variables or functions if needed
};

#endif