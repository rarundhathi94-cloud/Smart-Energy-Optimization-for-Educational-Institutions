# Smart Zonal Energy Optimization System for Educational Institutions

## Overview
The Smart Zonal Energy Optimization System is an IoT-based energy management solution designed to reduce electricity wastage in classrooms. In many educational institutions, lights and fans remain ON even when classrooms are partially occupied or empty. This project introduces an automated system that detects classroom occupancy and activates electrical loads only in the zones where students are present.

The system uses sensors and a microcontroller to monitor occupancy and control electrical devices, helping reduce unnecessary energy consumption.

---

## Problem Statement
In many educational institutions:

- Lights and fans remain ON even when classrooms are empty
- Manual switching leads to negligence and energy wastage
- There is no automated system to adjust power usage based on occupancy

This leads to increased electricity costs and inefficient energy usage.

---

## Proposed Solution
The proposed system automatically monitors classroom occupancy and controls electrical appliances accordingly.

Key functions include:

- Occupancy detection
- Zonal control of lights and fans
- Automatic shutdown when the classroom becomes empty
- Intelligent energy optimization using sensors

---

## System Architecture

### Controller
- ESP32 Microcontroller

### Sensors
- IR Beam Sensors – Entry/Exit detection
- PIR Motion Sensors – Zonal motion detection
- CO₂ Sensor – Occupancy validation
- Sound Sensor – Low-motion activity detection
- Door Reed Switch – Event synchronization

### Output Devices
- Relay modules to control lights and fans

---

## Prototype Implementation (Phase 1)

### Components Used
- ESP32 microcontroller
- PIR motion sensors
- Push buttons (entry/exit simulation)
- DHT22 temperature sensor
- LEDs representing lights and fans
- Breadboard and resistors

### Demonstrated Functions
- Occupancy counting
- Zonal motion detection
- Automatic device activation
- Automatic shutdown when classroom becomes empty

---

## Working Principle

1. Entry and exit events update the occupancy count.
2. PIR sensors detect motion in different classroom zones.
3. Lights and fans activate only in zones where motion is detected.
4. When the occupancy count reaches zero, all devices turn OFF automatically.

---

## Applications

- Engineering colleges
- Schools
- Coaching centers
- Smart classroom systems
- Smart campus energy management

---

## Future Improvements

- Multi-sensor validation using CO₂ and sound sensors
- Mobile monitoring dashboard
- Cloud-based energy usage analytics
- Integration with solar energy systems

---

## Conclusion
This project demonstrates a practical approach to intelligent classroom energy management using sensor-based automation. By activating electrical loads only when required, the system reduces energy waste and supports sustainable energy usage in educational institutions.
