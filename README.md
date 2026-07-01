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

## 🎥 Demo Video
[Watch the demo video on Google Drive](https://drive.google.com/file/d/1ALiUKS7cBLk9zxlZeeRe2NPX5MbHXHNt/view?usp=drive_link))

## 🌐 Live Demo
[Click here to view the project](https://arundhathismartenergyclassroom.netlify.app/)

## 🔗 Project Simulation
[Click here to view the Wokwi simulation](https://wokwi.com/projects/457846440077390849)

<div align="center">

# ⚡ Smart Zonal Energy Optimization System
### for Educational Institutions

**IoT-based classroom automation that turns lights and fans off in unused zones — automatically.**

[![ESP32](https://img.shields.io/badge/MCU-ESP32-e7352c?style=for-the-badge&logo=espressif&logoColor=white)](https://www.espressif.com/en/products/socs/esp32)
[![Arduino](https://img.shields.io/badge/Firmware-C++-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Wokwi](https://img.shields.io/badge/Simulation-Wokwi-1a1a1a?style=for-the-badge)](https://wokwi.com/)
[![Blynk](https://img.shields.io/badge/IoT-Blynk-1abcfe?style=for-the-badge)](https://blynk.io/)
[![Netlify](https://img.shields.io/badge/Dashboard%20Preview-Netlify-00C7B7?style=for-the-badge&logo=netlify&logoColor=white)](https://arundhathismartenergyclassroom.netlify.app/)
[![License](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)](#-license)

![Stars](https://img.shields.io/badge/dynamic/json?style=for-the-badge&label=stars&query=%24.stargazers_count&url=https%3A%2F%2Fapi.github.com%2Frepos%2Frarundhathi94%2FSmart-Zonal-Energy-Optimization&color=gold)
![Forks](https://img.shields.io/badge/dynamic/json?style=for-the-badge&label=forks&query=%24.forks_count&url=https%3A%2F%2Fapi.github.com%2Frepos%2Frarundhathi94%2FSmart-Zonal-Energy-Optimization&color=blue)

**[🌐 Live Dashboard Preview](https://arundhathismartenergyclassroom.netlify.app/) · [🧪 Wokwi Simulation](https://wokwi.com/projects/457846440077390849) · [📖 Documentation](#-table-of-contents)**

</div>

<p align="center">
  <img src="docs/assets/banner.png" alt="Smart Zonal Energy Optimization System — Banner" width="100%">
</p>

> **Note**
> This repository is developed and maintained as an academic engineering project. It contains a **working ESP32 prototype** (validated in circuit and in the Wokwi simulator) plus a **proposed future web dashboard** that previews how a full institutional rollout would look and feel.

---

## 📑 Table of Contents

1. [Project Overview](#-project-overview)
2. [Problem Statement](#-problem-statement)
3. [Proposed Solution](#-proposed-solution)
4. [Objectives](#-objectives)
5. [Key Features](#-key-features)
6. [Technology Stack](#-technology-stack)
7. [Hardware Components](#-hardware-components)
8. [Software Components](#-software-components)
9. [IoT Integration — Blynk](#-iot-integration--blynk)
10. [Future Web Dashboard (Proposed)](#-future-web-dashboard-proposed-future-implementation)
11. [System Architecture](#-system-architecture)
12. [Workflow](#-workflow)
13. [Working Principle](#-working-principle)
14. [Control Algorithm](#-control-algorithm)
15. [Energy Monitoring Logic](#-energy-monitoring-logic)
16. [Repository Structure](#-repository-structure)
17. [Screenshots](#-screenshots)
18. [Demo Videos](#-demo-videos)
19. [Live Website](#-live-website)
20. [Installation Guide](#-installation-guide)
21. [Running in Wokwi](#-running-in-wokwi)
22. [Configuring Blynk](#-configuring-blynk)
23. [Results](#-results)
24. [Advantages](#-advantages)
25. [Limitations](#-limitations)
26. [Future Enhancements](#-future-enhancements)
27. [Challenges Faced](#-challenges-faced)
28. [Lessons Learned](#-lessons-learned)
29. [Applications](#-applications)
30. [Sustainable Development Goals](#-sustainable-development-goals)
31. [Placement & Interview Value](#-placement--interview-value)
32. [Resume Description](#-resume-description)
33. [Interview Questions & Answers](#-interview-questions--answers)
34. [References](#-references)
35. [License](#-license)
36. [Author](#-author)

---

## 🧭 Project Overview

The **Smart Zonal Energy Optimization System** is an ESP32-based classroom automation prototype that reduces electricity wastage by controlling lights and fans **per zone**, based on real occupancy — instead of the usual "all on, all off" classroom switchboard.

The project has two layers:

| Layer | Status | Description |
|---|---|---|
| 🔌 **Embedded Prototype** | ✅ Built & simulated | ESP32 firmware + sensors, validated on breadboard and in Wokwi, with live telemetry pushed to a Blynk dashboard |
| 🖥️ **Web Dashboard** | 🧪 Proposed / Future | A browser-based MQTT dashboard concept, hosted as a live UI preview on Netlify, designed for the next phase of the project |

> **Tip**
> Everything under [Hardware Components](#-hardware-components) and [Control Algorithm](#-control-algorithm) reflects the actual firmware in [`sketch.ino`](./sketch.ino). Anything marked **Proposed** is a design target, not a shipped feature.

---

## ❗ Problem Statement

In most classrooms across Indian educational institutions:

- 💡 Lights and fans stay **ON for the entire class period**, regardless of how many zones of the room are actually occupied.
- 🖐️ Switching is **manual**, and negligence means devices are often left running after students leave.
- 📉 There is **no feedback loop** between occupancy and power consumption — energy usage is decided by habit, not by data.
- 💸 The result is a **recurring, avoidable operational cost** for the institution, multiplied across every classroom, every day.

Electricity is treated as a fixed cost, when in practice a large share of it is wasted on empty seats and empty zones.

---

## 💡 Proposed Solution

Instead of one master switch per room, the system divides a classroom into **zones** and treats each zone's power state as a function of *local* occupancy:

- Entry/exit events maintain a live **student count** for the room.
- Motion sensors placed per zone decide **which zone's lights and fan should be active**.
- The moment the room empties (count reaches zero), **every zone shuts down automatically** — no one has to remember to flip a switch.
- Environmental sensors (temperature, and in the full architecture, CO₂/sound/door state) add context so the system reacts to *actual presence*, not just a single noisy sensor reading.

This turns energy-saving from a "please remember" policy into a **default behavior of the room**.

---

## 🎯 Objectives

- ✅ Automatically detect classroom occupancy without cameras (privacy-friendly).
- ✅ Control lights and fans **independently per zone**, not per room.
- ✅ Guarantee automatic shutdown the instant a room becomes empty.
- ✅ Provide a live, remotely-accessible view of occupancy, temperature, and power draw.
- ✅ Build a design that is affordable, non-invasive (no rewiring of existing circuits), and scalable to multiple classrooms.

---

## ✨ Key Features

| Feature | Description | Status |
|---|---|---|
| 🧮 Occupancy Counting | Entry/exit buttons increment/decrement a live student counter | ✅ Implemented |
| 🗺️ Zonal Motion Detection | Independent PIR sensors per zone drive independent zone states | ✅ Implemented |
| 🌬️ Motion-Linked Ventilation | Ventilation activates whenever motion is detected in either zone | ✅ Implemented |
| 🔌 Auto Shutdown | All zones and ventilation force OFF when occupancy hits zero | ✅ Implemented |
| 🌡️ Environmental Sensing | DHT22 temperature logging; CO₂ analog channel available for future validation logic | ✅ Implemented (temperature) / 🧪 CO₂ reserved |
| 📱 Remote Monitoring | Live values pushed to a Blynk IoT dashboard during simulation | ✅ Implemented |
| ⚡ Energy Estimation | Real-time power draw and cumulative Wh energy consumption logged to Serial | ✅ Implemented |
| 🌐 Web Energy Dashboard | MQTT-driven browser dashboard with live gauges, zone cards, and sparklines | 🧪 Proposed Future Implementation |
| 🛰️ Multi-Sensor Validation | CO₂ trend + sound + door-reed sensor fusion to prevent false shutdowns | 🧪 Proposed Future Implementation |
| 🏫 Multi-Classroom Rollout | Central dashboard aggregating multiple ESP32 nodes across a campus | 🧪 Proposed Future Implementation |

---

## 🛠️ Technology Stack

<div align="center">

**Hardware**

![ESP32](https://img.shields.io/badge/ESP32-E7352C?style=flat-square&logo=espressif&logoColor=white)
![PIR](https://img.shields.io/badge/PIR-Motion%20Sensor-blue?style=flat-square)
![DHT22](https://img.shields.io/badge/DHT22-Temperature%20Sensor-orange?style=flat-square)

**Software**

![Arduino IDE](https://img.shields.io/badge/Arduino%20IDE-00979D?style=flat-square&logo=arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
![HTML5](https://img.shields.io/badge/HTML5-E34F26?style=flat-square&logo=html5&logoColor=white)
![CSS3](https://img.shields.io/badge/CSS3-1572B6?style=flat-square&logo=css3&logoColor=white)
![JavaScript](https://img.shields.io/badge/JavaScript-F7DF1E?style=flat-square&logo=javascript&logoColor=black)
![Wokwi](https://img.shields.io/badge/Wokwi-Simulator-1a1a1a?style=flat-square)

**IoT & Deployment**

![Blynk](https://img.shields.io/badge/Blynk-IoT%20Platform-1abcfe?style=flat-square)
![Netlify](https://img.shields.io/badge/Netlify-Hosting-00C7B7?style=flat-square&logo=netlify&logoColor=white)

</div>

| Category | Technology | Purpose |
|---|---|---|
| Microcontroller | ESP32 | Central controller for sensors, relays, and connectivity |
| Firmware Language | C++ (Arduino framework) | Sensor reads, zone logic, energy calculations |
| Simulation | Wokwi | Hardware-free circuit validation before physical deployment |
| Sensor Library | DHT.h | Temperature acquisition from the DHT22 |
| IoT Platform | Blynk | Remote telemetry and monitoring during simulation |
| Dashboard (proposed) | HTML5, CSS3, JavaScript, MQTT.js | Live browser-based energy dashboard for the next phase |
| Hosting | Netlify | Public preview of the proposed dashboard UI |

---

## 🔩 Hardware Components

| Component | Quantity | Role |
|---|---|---|
| ESP32 Dev Board | 1 | Main controller |
| PIR Motion Sensor | 2 | Zone 1 / Zone 2 motion detection |
| Push Button (Entry) | 1 | Increments occupancy count |
| Push Button (Exit) | 1 | Decrements occupancy count |
| DHT22 Sensor | 1 | Classroom temperature |
| Red LED ×2 | 2 | Represents Zone 1 / Zone 2 **lights** |
| Blue LED ×2 | 2 | Represents Zone 1 / Zone 2 **fans** |
| Yellow LED ×1 | 1 | Represents the **ventilation indicator** |
| Breadboard | 1 | Prototyping platform |
| 220 Ω Resistors | as needed | Current-limiting for LEDs |
| Analog CO₂ input | 1 | Reserved input channel for future occupancy-validation logic |

<details>
<summary><strong>📍 Pin Mapping (from <code>sketch.ino</code>)</strong></summary>

| Signal | GPIO |
|---|---|
| PIR1 (Zone 1) | 14 |
| PIR2 (Zone 2) | 27 |
| LIGHT1 | 18 |
| FAN1 | 19 |
| LIGHT2 | 23 |
| FAN2 | 25 |
| ENTRY_BUTTON | 32 |
| EXIT_BUTTON | 33 |
| VENTILATION | 26 |
| VENT_INDICATOR | 13 |
| DHTPIN (DHT22) | 4 |
| CO2PIN (analog) | 34 |

</details>

> In the fully proposed architecture (see [System Architecture](#-system-architecture)), these sensors are complemented by **dual IR beam sensors** for directional entry/exit counting, a **sound sensor**, and a **door reed switch** — used to cross-validate occupancy and avoid false shutdowns. These are design-stage additions and are **not present in the current prototype wiring**.

---

## 💻 Software Components

| Component | Description |
|---|---|
| `sketch.ino` | ESP32 firmware — occupancy counting, zonal control, ventilation logic, and energy estimation, printed live over Serial |
| Arduino IDE | Used to write, compile, and flash the firmware |
| Wokwi | Simulates the full circuit (ESP32 + sensors + LEDs) without physical hardware |
| Blynk App | Consumes telemetry from the simulated/physical device for remote viewing |
| `smart_classroom_dashboard.html` | Standalone, MQTT-driven dashboard — **proposed future implementation**, not wired to the current firmware |
| `flowchart.html` | Animated visual flowchart explaining the occupancy → zone → shutdown logic |

---

## 📡 IoT Integration — Blynk

During the Wokwi simulation phase, the project streams live sensor and state data to a **Blynk IoT dashboard**, giving a mobile/web view of the classroom without being physically present:

- Occupancy count and temperature readings
- Per-zone ON/OFF status
- Ventilation state

This provides the remote-monitoring layer for the current prototype, and validates the communication pattern that a future, production-grade deployment would extend to full cloud logging and multi-classroom aggregation.

> **Note**
> Blynk connectivity has been demonstrated in the Wokwi simulation environment for this project phase. See [Configuring Blynk](#-configuring-blynk) for setup steps.

---

## 🌐 Future Web Dashboard (Proposed Future Implementation)

> **Warning**
> The HTML/CSS/JS dashboard in this repository (`smart_classroom_dashboard.html`) is a **design preview of a future implementation**. It is **not currently wired to live classroom hardware** — the current firmware communicates over Serial and Blynk, not MQTT. The dashboard ships with a **demo-data mode** so its UI/UX can be evaluated independently of a live deployment, and it also includes an MQTT client (HiveMQ-compatible) that a future firmware revision could publish to.

**Planned dashboard sections:**

| Section | What it will show |
|---|---|
| Occupancy Card | Live student count and room status |
| Temperature Card | DHT22 readings with a rolling sparkline |
| Total Power Card | Aggregate power draw across all zones |
| Zone Panels | Per-zone light/fan state with a live power bar |
| Ventilation Panel | Motion-linked ventilation status |
| Voltage / Current Gauges | Circular gauges for bus voltage and current draw |
| Power History | Rolling sparkline of total power over time |
| MQTT Log | Raw topic/message stream for debugging and transparency |

It is hosted as a **live UI preview** on Netlify: **[arundhathismartenergyclassroom.netlify.app](https://arundhathismartenergyclassroom.netlify.app/)** — this link shows the *interface concept*, not a live institutional deployment.

---

## 🏗️ System Architecture

```mermaid
flowchart TB
    subgraph Sensing["Sensing Layer"]
        A1[PIR Sensor · Zone 1]
        A2[PIR Sensor · Zone 2]
        A3[Entry / Exit Buttons]
        A4[DHT22 Temperature]
        A5[CO2 Sensor - reserved]
    end

    subgraph Control["Control Layer — ESP32"]
        B1[Occupancy Counter]
        B2[Zonal State Machine]
        B3[Energy Estimator]
    end

    subgraph Output["Output Layer"]
        C1[Zone 1 Light + Fan]
        C2[Zone 2 Light + Fan]
        C3[Ventilation]
    end

    subgraph Monitoring["Monitoring Layer"]
        D1[Serial Monitor]
        D2[Blynk IoT App]
        D3[Future Web Dashboard - MQTT]
    end

    A1 --> B2
    A2 --> B2
    A3 --> B1
    A4 --> B3
    A5 -.reserved.-> B2

    B1 --> B2
    B2 --> C1
    B2 --> C2
    B2 --> C3
    B2 --> B3

    B3 --> D1
    B3 --> D2
    B3 -.proposed.-> D3
```

**Full proposed sensor architecture** (per the project's technology-architecture design, beyond the current prototype):

| Layer | Sensor | Purpose |
|---|---|---|
| Counting | Dual IR Beam | Directional entry/exit counting |
| Zonal | PIR ×N | Per-zone motion detection |
| Validation | CO₂ Sensor | Confirms sustained presence |
| Validation | Sound Sensor | Detects low-motion activity (e.g. seated work) |
| Sync | Door Reed Switch | Synchronizes entry/exit events |
| Output | Relay Modules | Switches real light/fan circuits |

---

## 🔄 Workflow

```mermaid
sequenceDiagram
    participant S as Student
    participant B as Entry/Exit Buttons
    participant P as PIR Sensors
    participant C as ESP32 Controller
    participant Z as Zone Devices
    participant V as Ventilation
    participant M as Monitoring (Serial/Blynk)

    S->>B: Enters classroom
    B->>C: Entry signal
    C->>C: students++
    P->>C: Motion detected in Zone X
    C->>Z: Turn ON Zone X (light + fan)
    C->>V: Turn ON ventilation
    C->>M: Push live status

    S->>B: Exits classroom
    B->>C: Exit signal
    C->>C: students--

    alt students == 0
        C->>Z: Force OFF all zones
        C->>V: Force OFF ventilation
        C->>M: Log "Room empty — system OFF"
    end
```

For a visual, animated version of this flow, see [`flowchart.html`](./flowchart.html).

---

## ⚙️ Working Principle

1. **Entry/Exit Tracking** — Push buttons simulate IR beam events; each entry increments and each exit decrements the occupancy counter.
2. **Zonal Motion Detection** — Each PIR sensor independently marks its zone as active when motion is detected.
3. **Selective Activation** — Only zones with confirmed motion turn their light and fan on; unoccupied zones stay off even if the room itself has students in it.
4. **Ventilation Coupling** — Ventilation activates whenever motion is present in *either* zone.
5. **Hard Shutoff** — The instant the occupancy counter reaches zero, both zones and ventilation are forced off — regardless of their last motion state.
6. **Continuous Telemetry** — Temperature, zone states, and power figures are logged every cycle over Serial (and mirrored to Blynk during simulation).

---

## 🧮 Control Algorithm

```text
LOOP every 500ms:
    IF entry_button pressed:      students += 1
    IF exit_button  pressed AND students > 0:  students -= 1

    read PIR1, PIR2
    read temperature (DHT22)
    read CO2 (reserved, monitored only)

    IF PIR1 == HIGH: zone1Active = true
    IF PIR2 == HIGH: zone2Active = true

    IF students == 0:
        zone1Active = false
        zone2Active = false

    apply zone1Active -> LIGHT1, FAN1
    apply zone2Active -> LIGHT2, FAN2

    ventilation = (PIR1 == HIGH) OR (PIR2 == HIGH)
    apply ventilation -> VENTILATION, VENT_INDICATOR

    compute currentPower, accumulate energyConsumed
    print status to Serial
```

This mirrors the real control flow implemented in [`sketch.ino`](./sketch.ino).

---

## 🔋 Energy Monitoring Logic

Each device is assigned a fixed power rating (Watts), and the firmware sums the active loads every cycle:

| Device | Power Rating |
|---|---|
| Light (per zone) | 15 W |
| Fan (per zone) | 60 W |
| Ventilation | 80 W |

```cpp
currentPower = 0;
if (zone1Active) currentPower += LIGHT_POWER + FAN_POWER;   // +75 W
if (zone2Active) currentPower += LIGHT_POWER + FAN_POWER;   // +75 W
if (ventilationOn) currentPower += VENT_POWER;               // +80 W

// Approximate energy in Watt-hours, accumulated every 0.5s cycle
energyConsumed += currentPower * (0.5 / 3600.0);
```

This gives a running estimate of instantaneous power draw (W) and cumulative energy consumption (Wh), both printed to the Serial monitor every cycle — the same figures the Blynk dashboard and the proposed web dashboard are designed to visualize.

---

## 📁 Repository Structure

```text
Smart-Zonal-Energy-Optimization/
├── sketch.ino                      # ESP32 firmware (occupancy, zonal control, energy logic)
├── smart_classroom_dashboard.html  # Proposed future web dashboard (MQTT-based)
├── flowchart.html                  # Animated visual flowchart of the control logic
├── README.md                       # Project documentation (this file)
└── docs/
    └── assets/                     # Screenshots, diagrams, and media (placeholders)
```

---

## 🖼️ Screenshots

<div align="center">

| Prototype (Breadboard) | Wokwi Simulation |
|---|---|
| ![Prototype](docs/assets/prototype.png) | ![Wokwi](docs/assets/wokwi.png) |

| Blynk Dashboard | Future Web Dashboard |
|---|---|
| ![Blynk](docs/assets/blynk.png) | ![Dashboard](docs/assets/dashboard.png) |

| System Architecture | Circuit Diagram |
|---|---|
| ![Architecture](docs/assets/architecture.png) | ![Circuit](docs/assets/circuit.png) |

</div>

---

## 🎥 Demo Videos

- 📹 **Prototype Demo (Breadboard)** — _placeholder link_
- 📹 **Wokwi + Blynk Live Simulation** — _placeholder link_
- 📹 **Future Dashboard Walkthrough** — _placeholder link_

---

## 🌍 Live Website

The proposed dashboard UI is live on Netlify:

**🔗 [https://arundhathismartenergyclassroom.netlify.app/](https://arundhathismartenergyclassroom.netlify.app/)**

> Reminder: this is a **UI preview running in demo mode by default**, not a connection to a physically deployed classroom.

---

## 🚀 Installation Guide

### Prerequisites
- [Arduino IDE](https://www.arduino.cc/en/software) (or Wokwi, no hardware required)
- ESP32 board package installed in Arduino IDE
- `DHT sensor library` (Adafruit) installed via Library Manager

### Steps

```bash
# 1. Clone the repository
git clone https://github.com/rarundhathi94/Smart-Zonal-Energy-Optimization.git
cd Smart-Zonal-Energy-Optimization

# 2. Open sketch.ino in Arduino IDE

# 3. Install dependencies via Library Manager:
#    - "DHT sensor library" by Adafruit
#    - "Adafruit Unified Sensor"

# 4. Select Board: ESP32 Dev Module

# 5. Select the correct COM port and click Upload
```

---

## 🧪 Running in Wokwi

1. Open the simulation: **[wokwi.com/projects/457846440077390849](https://wokwi.com/projects/457846440077390849)**
2. Click **▶ Start Simulation**.
3. Use the on-screen buttons to simulate entry/exit events.
4. Move the mouse near a PIR sensor to trigger motion in that zone.
5. Watch the LEDs (lights/fans/ventilation) and the Serial Monitor update in real time.

---

## 📲 Configuring Blynk

1. Create a free account at [blynk.io](https://blynk.io/) and start a new template/device.
2. Add datastreams for: occupancy count, temperature, Zone 1 state, Zone 2 state, ventilation state.
3. Copy your **Blynk Auth Token** into the firmware's Blynk configuration section.
4. Add the Blynk library via Arduino Library Manager (or Wokwi's built-in library support).
5. Run the simulation (or flash to hardware) and open the Blynk app to view live values.

---

## 📊 Results

- ✅ Zonal activation logic validated in both breadboard prototype and Wokwi simulation.
- ✅ Entry/exit occupancy tracking confirmed accurate across repeated test cycles.
- ✅ Automatic full shutdown verified the instant occupancy reaches zero.
- ✅ Live telemetry (occupancy, temperature, zone status) successfully streamed to Blynk during simulation.

---

## ✅ Advantages

- No camera involved — occupancy detection stays privacy-friendly.
- Zone-level granularity avoids "all-or-nothing" switching.
- Automatic shutdown removes reliance on human memory/discipline.
- Low-cost sensor set — no structural rewiring required for the prototype.
- Simulation-first workflow (Wokwi) lets the logic be validated before touching hardware.

## ⚠️ Limitations

- Current prototype relies on **PIR only** for zonal motion — no CO₂/sound/door cross-validation yet, so prolonged low-motion activity (e.g., silent reading) in a zone can theoretically be missed.
- Occupancy counter is **volatile** — a power cycle resets the count (no persistence yet).
- The web dashboard is a **UI concept**, not yet connected to live firmware telemetry.
- Real relay-driven load switching (mains lights/fans) has not yet been physically validated — only simulated at LED/logic level.

---

## 🔮 Future Enhancements

- 🧠 AI-based occupancy prediction from historical usage patterns
- ☁️ Cloud database for long-term energy analytics
- 📱 Dedicated mobile app for facility managers
- ☀️ Integration with renewable/solar energy systems
- 🛠️ Predictive maintenance alerts for sensors and relays
- 📑 Automated energy usage reports for institutions
- 🏫 Smart campus rollout across multiple buildings
- 🪞 Digital twin of the classroom for simulation-based planning
- 📈 Machine-learning-driven analytics on the web dashboard
- 🛰️ Multi-sensor fusion (CO₂ + sound + door reed) for false-shutdown prevention

---

## 🧗 Challenges Faced

- Balancing **responsiveness** (fast zone activation) against **false positives** from single-sensor PIR readings.
- Designing a shutdown rule that is aggressive enough to save energy but doesn't cut off a zone mid-use.
- Keeping the prototype **low-cost and non-invasive** while still leaving room to scale to a full multi-sensor architecture.
- Structuring energy estimation logic that stays simple on an embedded target but still produces meaningful Wh figures.

## 📘 Lessons Learned

- Zonal automation logic is best validated in simulation (Wokwi) before any hardware is soldered — it catches state-machine bugs early and for free.
- A single sensor type (PIR alone) is a good v1, but real institutional deployments need sensor fusion to avoid false shutdowns — this shaped the proposed multi-sensor architecture.
- Designing the dashboard and firmware as **decoupled layers** (Serial/Blynk now, MQTT later) made it possible to prototype the UI independently of the embedded timeline.

---

## 🏢 Applications

- Engineering colleges and universities
- Schools and coaching centers
- Corporate training rooms and seminar halls
- Smart campus energy management initiatives
- Any space with distinct, independently-usable zones

---

## 🌱 Sustainable Development Goals

| SDG | Contribution |
|---|---|
| **SDG 7** — Affordable and Clean Energy | Reduces avoidable electricity consumption in institutional buildings |
| **SDG 11** — Sustainable Cities and Communities | Supports smart, resource-efficient campus infrastructure |
| **SDG 12** — Responsible Consumption and Production | Encourages usage-based consumption instead of blanket operation |
| **SDG 13** — Climate Action | Lower electricity demand reduces the associated carbon footprint |

---

## 🎓 Placement & Interview Value

This project demonstrates competency across multiple hiring-relevant domains:

| Domain | Demonstrated Through |
|---|---|
| **Embedded Systems** | ESP32 GPIO control, sensor interfacing, real-time control loops |
| **IoT** | Blynk integration, MQTT dashboard design |
| **Automation & Control Logic** | Zonal state machine, occupancy-driven shutdown logic |
| **Web Development** | Responsive HTML/CSS/JS dashboard with live data visualization |
| **Energy Systems Thinking** | Power/energy estimation model, Wh accumulation logic |
| **Problem Solving** | Designing sensor fusion strategy to reduce false shutdowns |
| **Simulation-Driven Engineering** | Wokwi-first validation workflow before physical build |

---

## 📄 Resume Description

> Designed and implemented an ESP32-based Smart Zonal Energy Optimization System that automates classroom lighting and ventilation using occupancy-driven, zone-level control logic. Built and validated the firmware in Arduino C++ using the Wokwi simulator, integrated live telemetry with the Blynk IoT platform, and designed a proposed MQTT-based web dashboard (HTML/CSS/JS) for future institutional deployment.

---

## ❓ Interview Questions & Answers

<details>
<summary><strong>1. Why did you choose the ESP32 over an Arduino Uno?</strong></summary>
The ESP32 offers built-in Wi-Fi/Bluetooth, more GPIO pins, and higher processing headroom — all needed for sensor-heavy zonal logic and future IoT connectivity (Blynk/MQTT) that an Uno cannot support without extra shields.
</details>

<details>
<summary><strong>2. How does zonal control differ from simple occupancy-based switching?</strong></summary>
Simple occupancy switching treats the whole room as one unit — if anyone is present, everything turns on. Zonal control divides the room into independent zones, each with its own motion sensor and its own light/fan pair, so only the occupied portion of the room draws power.
</details>

<details>
<summary><strong>3. What happens if a student sits still for a long period?</strong></summary>
In the current PIR-only prototype, prolonged stillness could reduce motion triggers. The proposed architecture solves this with sensor fusion — CO₂ trend and sound-sensor activity confirm continued presence even without motion, preventing a false shutdown.
</details>

<details>
<summary><strong>4. How is occupancy counted?</strong></summary>
Two push buttons simulate entry and exit events (representing IR beam sensors in the full design). Each entry increments a counter; each exit decrements it, with a floor of zero.
</details>

<details>
<summary><strong>5. What triggers the ventilation system?</strong></summary>
Motion detected in either zone. It stays on as long as either PIR is active, and is force-disabled the instant the room's occupancy count reaches zero.
</details>

<details>
<summary><strong>6. How is energy consumption calculated?</strong></summary>
Each device has a fixed wattage. The firmware sums the wattage of all active devices each cycle to get instantaneous power, then integrates that over time (power × time/3600) to accumulate an approximate Watt-hour energy total.
</details>

<details>
<summary><strong>7. Why use Wokwi before building physical hardware?</strong></summary>
Wokwi lets the full circuit and firmware logic be validated — including sensor behavior and zone-state transitions — without the cost or risk of physical components, catching logic errors early and cheaply.
</details>

<details>
<summary><strong>8. What is Blynk's role in this project?</strong></summary>
Blynk provides a ready-made IoT dashboard layer, letting occupancy, temperature, and zone status be monitored remotely during simulation without building a custom mobile app from scratch.
</details>

<details>
<summary><strong>9. Why does the web dashboard use MQTT instead of HTTP polling?</strong></summary>
MQTT is a lightweight publish/subscribe protocol well-suited to frequent, small IoT telemetry updates (occupancy, power, temperature), with lower overhead than repeated HTTP requests — which is why it was chosen for the proposed dashboard's design.
</details>

<details>
<summary><strong>10. Is the current dashboard connected to live hardware?</strong></summary>
No — it currently runs in a demo-data mode to showcase the UI/UX. Connecting it to live telemetry requires extending the firmware with an MQTT client, which is part of the proposed future implementation.
</details>

<details>
<summary><strong>11. What sensors were considered but not yet implemented?</strong></summary>
Dual IR beam sensors for directional counting, a CO₂ sensor for occupancy validation, a sound sensor for low-motion activity detection, and a door reed switch for event synchronization.
</details>

<details>
<summary><strong>12. Why avoid using a camera for occupancy detection?</strong></summary>
Cameras raise privacy concerns in an educational setting and add cost/processing overhead. PIR, IR beam, and environmental sensors achieve reliable occupancy detection without capturing identifiable images.
</details>

<details>
<summary><strong>13. How would you scale this system to an entire campus?</strong></summary>
Each classroom would run its own ESP32 node, publishing telemetry to a shared broker/dashboard, aggregating zone and energy data centrally for facility-wide monitoring — a direct extension of the current single-room architecture.
</details>

<details>
<summary><strong>14. What is the risk of relying on a single PIR sensor per zone?</strong></summary>
A single PIR can produce false negatives during low-motion activity and false positives from unrelated movement (e.g., a door draft), which is why the full architecture proposes multi-sensor validation.
</details>

<details>
<summary><strong>15. What safety consideration applies to relay-driven loads?</strong></summary>
Relays isolate the low-voltage control circuit from mains-voltage lighting/fan circuits, so the ESP32 never switches high voltage directly — critical for both circuit safety and code compliance in a real deployment.
</details>

<details>
<summary><strong>16. How does the system behave immediately after power loss?</strong></summary>
In the current prototype, the occupancy counter is not persisted, so it resets to zero after a power cycle. Persisting counts (e.g., to non-volatile memory) is listed as a limitation to address in future work.
</details>

<details>
<summary><strong>17. What's the difference between the "System Architecture" and the "Prototype" in this repo?</strong></summary>
The System Architecture describes the full, proposed sensor set (IR beam, PIR, CO₂, sound, door reed). The Prototype is the subset actually implemented and tested: PIR ×2, entry/exit buttons, and a DHT22 — everything documented under Hardware Components as "Implemented."
</details>

<details>
<summary><strong>18. Why measure temperature in a classroom energy project?</strong></summary>
Temperature context helps validate ventilation decisions and lays the groundwork for future comfort-aware automation (e.g., adjusting thresholds based on ambient conditions).
</details>

<details>
<summary><strong>19. What's the biggest source of energy savings in this design?</strong></summary>
The zonal shutdown rule — cutting power to unused zones during class, and forcing every load off the instant the room empties — rather than waiting for a manual switch-off.
</details>

<details>
<summary><strong>20. What would you change if you rebuilt this project today?</strong></summary>
Implement non-volatile occupancy storage, wire the CO₂/sound/door sensors into an actual validation layer instead of leaving them reserved, and connect the web dashboard to real MQTT telemetry from the firmware rather than demo data.
</details>

---

## 📚 References

- [ESP32 Official Documentation — Espressif](https://www.espressif.com/en/products/socs/esp32)
- [Wokwi Simulator](https://wokwi.com/)
- [Blynk IoT Platform](https://blynk.io/)
- [Adafruit DHT Sensor Library](https://github.com/adafruit/DHT-sensor-library)
- [MQTT.js Client Library](https://github.com/mqttjs/MQTT.js)

---

## 📜 License

This project is licensed under the **MIT License** — see the [LICENSE](./LICENSE) file for details.

---

## 👩‍💻 Author

<div align="center">

**Built and maintained by [Arundhathi R](https://github.com/rarundhathi94)**

*Easwari Engineering College*

[![GitHub](https://img.shields.io/badge/GitHub-rarundhathi94-181717?style=flat-square&logo=github)](https://github.com/rarundhathi94)

If this project helped you, consider ⭐ starring the repository!

</div>
