# 🚗 Vehicle-to-Vehicle (V2V) Communication System using ESP32

---

## 📌 Project Overview

This project focuses on the design and development of a **Vehicle-to-Vehicle (V2V) communication system** aimed at improving road safety through real-time data exchange between vehicles.

The system enables one vehicle (Vehicle A) to collect environmental data such as **distance and tilt** and transmit it wirelessly to another vehicle (Vehicle B), where it is visualized through a **live web dashboard**.

The proposed solution demonstrates how **low-cost embedded systems** can be used to implement basic automotive safety concepts.

> ⚠️ **Project Status:** This project is developed as an academic prototype for demonstration purposes.

---

## 🎯 Objectives

- Develop real-time communication between vehicles  
- Provide collision warning using distance sensing  
- Detect abnormal tilt (accident indication)  
- Transmit data wirelessly between vehicles  
- Display vehicle data on a live dashboard  
- Demonstrate a centralized monitoring system  

---

## 🚨 Problem Statement

Road accidents frequently occur due to delayed driver reaction and lack of awareness about nearby vehicles.

Vehicles currently operate independently without communication, which limits the ability to warn drivers about potential hazards.

Advanced safety systems exist but are:
- Expensive  
- Limited to high-end vehicles  

This project aims to demonstrate a **low-cost V2V prototype** that improves awareness using embedded systems and wireless communication.

---

## ⚙️ System Features

- ✅ Distance Monitoring (Ultrasonic Sensor)  
- ✅ Tilt Detection (MPU6050)  
- ✅ Wireless Data Transmission (ESP32)  
- ✅ Real-time Web Dashboard Visualization  
- ✅ Vehicle Status Indication (Safe / Warning / Collision)  
- ✅ Simulated Location Tracking  

---

## 🛠 Hardware Components

- ESP32 Development Board (2 Units)  
- Ultrasonic Sensors (HC-SR04)  
- MPU6050 (Accelerometer & Gyroscope)  
- Motor Driver Module (for chassis setup)  
- DC Motors with Chassis  
- Battery / Power Supply  
- Breadboard and Connecting Wires  

---

## 💻 Software Tools

- Arduino IDE  
- Embedded C / C++  
- ESP-NOW / Wi-Fi Communication  
- HTML, CSS, JavaScript (Web Dashboard)  

---

## 🧩 System Architecture

Each vehicle acts as an independent embedded node:

### 🚘 Vehicle A (Transmitter)
- Collects sensor data (distance, tilt)  
- Processes data using ESP32  
- Transmits data wirelessly  

### 🚘 Vehicle B (Receiver)
- Receives transmitted data  
- Processes incoming data  
- Displays data on web dashboard  

---

## 🔄 Methodology

1. Sensors monitor distance and tilt conditions  
2. ESP32 processes sensor data in real time  
3. Data is transmitted wirelessly to the receiving vehicle  
4. The receiving ESP32 processes incoming data  
5. Dashboard updates and displays vehicle status  
6. Alerts are generated based on detected conditions  

---

## 🚀 Applications

- Smart Vehicle Monitoring Systems  
- Collision Warning Systems  
- IoT-based Transportation Solutions  
- Educational Embedded Systems Projects  

---

## 🔮 Future Scope

- Integration with GPS for real-time tracking  
- Multi-vehicle communication system  
- Mobile application for monitoring  
- Cloud-based data logging  
- Autonomous vehicle integration  

---

## 👨‍💻 Team Members

- B NANDIVARDHAN REDDY(2300049094)  
- R. GAYATRI(2300049060)
- ARUMILLI GOVARSHITHA(2300049132)

---

## 📌 Note

This repository contains project documentation and implementation related to the V2V communication prototype developed for academic purposes.

---

## 📜 License

This project is developed for academic and educational purposes.

---

⭐ If you find this project interesting, feel free to explore!
