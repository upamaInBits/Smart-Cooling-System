# Smart Cooling System (Arduino + MATLAB/Simulink)

This project presents a prototype smart cooling system designed to regulate temperature inside a storage container using real-time sensor data and automated control logic.

The system dynamically monitors temperature and activates cooling components (fans and Peltier plate) to maintain optimal conditions for perishable goods.

---

## Technologies Used
- Arduino UNO R4 WiFi
- MATLAB / Simulink
- DHT11 Temperature Sensor
- Relay Modules
- Cooling Fans
- Peltier Plate (Thermoelectric Cooling)
- LCD Display (I2C)

---

## System Overview

The system continuously reads temperature data using a DHT11 sensor and:
- Activates cooling when temperature > 23°C
- Turns off cooling when temperature ≤ 23°C
- Displays real-time temperature on an LCD

A combination of:
- Control logic (Arduino)
- Simulation modeling (MATLAB/Simulink)

was used to design and validate the system.

---

## Modeling (MATLAB/Simulink)

- Temperature behavior modeled using a first-order system
- Finite State Machines (FSM) used to control cooling logic
- Simulink used for simulation and validation of temperature changes

---

## Hardware Implementation

Key components:
- Arduino controller
- DHT11 sensor for temperature monitoring
- Relays to control fans and Peltier plate
- Heat sinks for efficient cooling
- Insulated container for thermal stability

The system uses:
- Digital communication from sensor → Arduino
- Relay-based switching for actuators

---
## Screenshot
<img width="1920" height="1080" alt="acooling1" src="https://github.com/user-attachments/assets/54c6b11d-8a3a-4632-8ca0-b0f854ca9072" />
<img width="1920" height="1080" alt="cooling2" src="https://github.com/user-attachments/assets/c58395b7-c797-41e9-b502-51c224995d9b" />

---

## Results

- Cooling system reduced temperature from **30°C → 23°C**
- With Peltier + fan:
  - Cooling time reduced by **~50%**
- Insulated container significantly improved performance

---

## Limitations

- Sensor accuracy (DHT11 has slight error)
- Limited cooling capacity due to hardware constraints
- External environmental factors affect performance

---

## Files

- `initialization.m` → Simulation setup
- `postprocessing.m` → Data analysis
- `TemperatureInFridge.mdl` → Simulink model
- `s1.mat` → Simulation data  

---

## Future Improvements

- IoT integration for remote monitoring
- More accurate sensors (DHT22 or better)
- Better insulation and cooling hardware
- Mobile app interface
