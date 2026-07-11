# Task 2 - Soil Moisture Monitoring and Automatic Irrigation System using ESP32

## Objective
To monitor soil moisture using an analog sensor (simulated using a potentiometer in Wokwi) and automatically control a relay module that simulates a water pump based on a predefined moisture threshold.

## Components Used
- ESP32
- Potentiometer (used to simulate a Soil Moisture Sensor)
- 5V Relay Module
- LED
- 220Ω Resistor
- Jumper Wires
- Wokwi Simulator

## Circuit Connections

### Potentiometer
- VCC → 3.3V
- GND → GND
- SIG → GPIO 34

### Relay Module
- VCC → 5V
- GND → GND
- IN → GPIO 18

### LED
- Anode (+) → GPIO 19 (through a 220Ω resistor)
- Cathode (-) → GND

## Working
- The ESP32 continuously reads the analog value from the potentiometer using its ADC.
- The potentiometer simulates the output of a soil moisture sensor.
- The measured value is compared with a predefined threshold.
- If the soil is dry, the relay is activated to simulate turning the water pump ON, and the LED lights up.
- If the soil is wet, the relay is turned OFF, and the LED is switched OFF.
- The sensor values and system status are displayed on the Serial Monitor every 2 seconds.

## Key Features
- Analog-to-Digital Conversion (ADC)
- Threshold-based decision making
- Automatic relay control
- Serial data monitoring
- LED status indication

## Software Used
- Wokwi Simulator
- Arduino IDE (ESP32)

## Files Included
- sketch.ino
- diagram.json
- wokwi-project.txt
