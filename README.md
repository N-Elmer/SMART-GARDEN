# SMART-GARDEN
SMART PLANT MONITORING 🌹🚿 AND CONTROL SYSTEM

# Smart Garden

Smart Garden is a system designed to monitor and automate the irrigation and lighting for plants in a garden using Arduino and various sensors. The system ensures optimal plant health by providing appropriate irrigation and lighting based on environmental conditions. The project is implemented using Arduino C++.

## Folder Structure

📂 SmartGarden
   
   |
   
   ├── 📁 libraries
   
   │   ├── 📂 SensorLibrary
   
   │   │   ├── 📄 SensorLibrary.h
   
   │   │   └── 📄 SensorLibrary.cpp
   
   │   └── 📂 ActuatorLibrary
   
   │       ├── 📄 ActuatorLibrary.h
   
   │       └── 📄 ActuatorLibrary.cpp
   
   ├── 📄 main.ino
   
   ├── 📄 irrigation.cpp
   
   ├── 📄 lighting.cpp
   
   └── 📄 requirements.txt

The project folder structure consists of the following files and directories:

- **libraries**: This directory contains the libraries used in the project.
  - **SensorLibrary**: Subdirectory for the sensor library.
    - 📄 SensorLibrary.h: Header file for the sensor library.
    - 📄 SensorLibrary.cpp: Source file for the sensor library.
  - **ActuatorLibrary**: Subdirectory for the actuator library.
    - 📄 ActuatorLibrary.h: Header file for the actuator library.
    - 📄 ActuatorLibrary.cpp: Source file for the actuator library.

- 📄 main.ino: The main Arduino sketch file that integrates all the components of the Smart Garden system.

- 📄 irrigation.cpp: Source file containing functionality related to irrigation.

- 📄 lighting.cpp: Source file containing functionality related to lighting.

- 📄 requirements.txt: File listing the required libraries for the project.

## Installation and Setup

To use this Smart Garden system, you will need the following components:

- Arduino board (e.g., Arduino Uno)
- Sensors (temperature sensor, humidity sensor, soil moisture sensor)
- Actuators (fan, mister, pump)

Follow these steps to set up the project:

1. Download and install the Arduino IDE from the official Arduino website.
2. Clone or download this project repository.
3. Connect the sensors and actuators to the Arduino board according to the project requirements.
4. Open the `main.ino` file in the Arduino IDE.
5. Install the required libraries listed in the `requirements.txt` file using the Arduino Library Manager.
6. Upload the code to the Arduino board.
7. Monitor the serial output to observe the Smart Garden system's behavior and adjust the thresholds or logic as needed.

## Code Explanation

The Smart Garden system is implemented using an object-oriented approach with separate header and implementation files for the sensor and actuator libraries.

The `SensorLibrary` class encapsulates the functionality related to sensors, including initialization and reading sensor values. The `ActuatorLibrary` class encapsulates the functionality related to actuators, such as turning on and off specific actuators.

The `main.ino` file initializes the sensor and actuator objects, reads sensor values, and performs appropriate actions based on the readings. The `irrigation.cpp` and `lighting.cpp` files contain additional functionality specific to irrigation and lighting, respectively.

Make sure to adjust the code according to your specific sensor and actuator connections and requirements.

## Troubleshooting

If you encounter any issues or have trouble setting up the Smart Garden system, consider the following steps:

- Double-check the wiring connections between the sensors, actuators, and the Arduino board.
- Ensure that the required libraries listed in the `requirements.txt` file are installed.
- Verify that the Arduino board and port are

 selected correctly in the Arduino IDE.
- Check the serial monitor for any error messages or unexpected behavior.

If the problem persists, consult the documentation of the sensors, actuators, and libraries used in the project or seek assistance from the Arduino community.

---

This README file provides an overview of the Smart Garden project, its folder structure, installation instructions, code explanation, and troubleshooting tips. Use it as a guide to set up and understand the Smart Garden system.
