# V2V-Communication-System
ESP32-based V2V communication prototype for real-time vehicle safety and emergency alerts. Project under development.

# 🚗 Vehicle-to-Vehicle (V2V) Communication System with Emergency Priority and Hazard Memory

## 📌 Project Overview

This project focuses on the design and development of a **Vehicle-to-Vehicle (V2V) communication system** aimed at improving road safety through real-time cooperative communication between vehicles.

The system enables vehicles to share critical information such as collision risk, sudden braking events, accident detection, and emergency vehicle alerts using low-latency wireless communication.

The proposed solution demonstrates how **low-cost embedded systems** can be used to implement advanced automotive safety concepts.

> ⚠️ **Project Status:** This project is currently under development as part of academic evaluation and ongoing implementation.

---

## 🎯 Objectives

- Develop real-time communication between vehicles.
- Provide collision warning using distance sensing.
- Detect sudden braking and accident conditions.
- Implement emergency vehicle priority mode.
- Introduce hazard memory for cooperative awareness.
- Demonstrate low-latency wireless communication using ESP32.

---

## 🚨 Problem Statement

Road accidents frequently occur due to delayed driver reaction, lack of awareness about nearby vehicles, and absence of communication between vehicles.

Emergency vehicles such as ambulances also face delays in traffic because other drivers are not aware of their presence.

Existing advanced vehicle safety systems are expensive and mostly available only in high-end vehicles.

This project aims to develop a **low-cost prototype** that demonstrates cooperative vehicle safety using embedded technology.

---

## ⚙️ System Features

- ✅ Collision Warning
- ✅ Sudden Brake Alert
- ✅ Speed Synchronization
- ✅ Accident Detection
- ✅ Emergency Vehicle Priority Mode
- ✅ Hazard Memory Mechanism
- ✅ Wireless Communication (ESP-NOW)

---

## 🛠 Hardware Components

- ESP32 Development Board
- Ultrasonic Sensor (HC-SR04)
- MPU6050 Accelerometer & Gyroscope
- Push Button (Emergency Mode)
- Buzzer and LEDs
- Motor Driver Module
- DC Motors with Chassis
- Battery / Power Supply
- Connecting Wires and Breadboard

---

## 💻 Software Tools

- Arduino IDE / PlatformIO
- Embedded C / C++
- ESP-NOW Communication Protocol
- Serial Monitor for Debugging

---

## 🧩 System Architecture

Each vehicle acts as an independent embedded node equipped with sensors and wireless communication capability.

The ESP32 processes sensor data and transmits safety-related information to nearby vehicles using peer-to-peer communication.

Receiving vehicles generate alerts to improve driver awareness and response time.

(Block diagram available in the Hardware folder.)

---

## 🔄 Methodology

1. Sensors continuously monitor vehicle conditions such as distance and acceleration.
2. ESP32 processes the sensor data in real time.
3. Hazard events such as braking, collision risk, or accidents are detected.
4. Data packets are transmitted wirelessly to nearby vehicles.
5. Receiving vehicles analyze data and generate alerts.
6. Hazard memory stores events temporarily for cooperative awareness.
7. Emergency mode can be activated manually using a push button.

---

## 🚀 Applications

- Intelligent Transportation Systems (ITS)
- Connected Vehicles
- Automotive Safety Systems
- Emergency Response Systems
- Smart Cities

---

## 🔮 Future Scope

- Integration with GPS and cloud platforms
- Automotive-grade communication (CAN / V2X)
- Multi-vehicle network expansion
- Smart traffic signal integration
- AI-based collision prediction

---

## 👨‍💻 Team Members

- B NANDIVARDHAN REDDY(2300049094)  
- R. GAYATRI(2300049060)  
- ARUMILLI GOVARSHITHA(2300049132) 

---

## 📌 Note

This repository contains project documentation, design resources, and implementation code related to the ongoing development of the V2V communication prototype.

---

## 📜 License

This project is developed for academic and educational purposes.

---

⭐ If you find this project interesting, feel free to explore and contribute!


