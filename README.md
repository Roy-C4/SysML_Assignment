SysML SMSTWD : Tsunami Detection System
# Smart Monitoring System for Weather and Tsunami Detection (SMSTWD)

[![Status](https://img.shields.io/badge/Status-Prototype%20Complete-green)]()
[![System](https://img.shields.io/badge/System-SysML-blue)]()
[![Methodology](https://img.shields.io/badge/Methodology-TRIZ%20%2F%209--Box-orange)]()

> **Mission:** To save lives, mitigate damage, and offer peace of mind by transforming accurate monitoring into actionable intelligence on natural disasters.

## 📖 Overview

The **SMSTWD** is a cutting-edge systems engineering initiative designed to enhance disaster preparedness and resilience. Unlike traditional reactive systems, SMSTWD leverages multi-modal sensor fusion (Satellite, Aerial, and Underwater) and AI-driven risk scoring to provide real-time, probabilistic hazard estimation for Tsunami and Storm events.

This project was developed using a rigorous **Systems Thinking** approach, utilizing the **9-Box Model** for contextual evolution and **TRIZ Inventive Principles** to resolve complex engineering contradictions regarding reliability, energy efficiency, and signal processing.

## 🚀 Key Features

* **Multi-Modal Sensor Fusion:** Integrates heterogeneous data streams:
    * **Satellite:** High-resolution imagery and storm coordinate tracking (0.5-2km resolution).
    * **Aerial:** Real-time telemetry for wind speed, direction, and precipitation.
    * **Underwater:** Deep-sea sensing for seismic vibrations, water pressure, and flow direction.
* **AI/ML Risk Scoring:** Utilizes "Early Fusion" machine learning models to calculate probabilistic risk scores rather than simple static thresholds.
* **Universal Signal Processing:** Implements **TRIZ Principle #6 (Universality)** via a single, configurable de-noising algorithm applicable to all sensor types.
* **Energy Optimized:** Applies **TRIZ Principle #19 (Periodic Action)**, utilizing pulse-based transmission for deep-sea sensors to maximize battery life in remote locations.
* **Intelligent Alerting:**
    * **Government:** Continuous data stream with technical dashboards and automated infrastructure triggers (e.g., flood gates).
    * **Public:** Geo-targeted, multi-channel (SMS, App), and **multilingual** alerts based on region.

## 🏗 System Architecture

The system is modeled using **SysML** (Systems Modeling Language) to ensure robust separation of concerns and high reliability.

### 1. Structural Decomposition (BDD)
The architecture is divided into four primary subsystems:
* **Monitoring Subsystem:** Ingests and pre-processes raw data using solid-state sensors (**TRIZ Principle #28**).
* **Data Processing Unit (DPU):** The computational core responsible for sensor fusion and ML inference.
* **Alerting & Communication:** Manages stakeholder interaction logic and language translation.
* **Power Management:** Regulates energy harvesting from tidal/solar sources.

### 2. Operational Logic (State Machines)
The system employs orthogonal state machines to handle concurrency:
* **Parallel Sensing:** Aerial, Satellite, and Underwater sensors operate in independent threads to ensure that a failure in one modality does not halt the system.
* **Dynamic Thresholding:** The system adapts its internal sensitivity based on environmental states (switching from "Calm" to "Volatile" modes).

## 💻 Graphical User Interface (GUI)

The project includes a dashboard for system validation and real-time monitoring.

| **Nominal State** | **Hazard Detection** |
|:---:|:---:|
| *System operating normally. "Everything is Fine" message broadcasted.* | *Tsunami alert triggered by dual-sensor validation (Seismic + Pressure).* |
| ![GUI Fine](path/to/GUI_fine.jpg) | ![GUI Tsunami](path/to/GUI_Tsunami.jpg) |

*The GUI visualizes real-time sensor inferences, diagnostic heartbeats (LEDs), and the specific multilingual messages sent to the public.*

## 🛠 Engineering Methodology

This project is not just a software implementation but a full Systems Engineering study.

### The 9-Box Model
We analyzed the system across temporal (Past, Present, Future) and hierarchical (Super-system, System, Sub-system) levels to ensure the architecture supports future integrations with **Autonomous Transport Networks** and **Smart City Infrastructure**.

### TRIZ Contradiction Resolution
Key engineering conflicts were solved using the TRIZ Matrix:
1.  **Reliability (#35) vs. Energy (#17):** Solved via **Local Quality (#3)** and **Periodic Action (#19)** (Non-uniform power profiles).
2.  **Noise (#29) vs. Complexity (#45):** Solved via **Universality (#6)** (One de-noising pipeline for all sensors).
3.  **Loss of Time (#26) vs. Reliability (#35):** Solved via **Mechanics Substitution (#28)** (Replacing moving parts with ultrasonic sensors).

## 📂 Repository Structure

```text
├── docs/
│   ├── Report.pdf              # Full System Engineering Report
│   ├── Requirements.pdf        # Functional & Non-functional Requirements
│   └── SysML_Sketch.pdf        # Initial System Thinking models
├── models/
│   ├── SMSTWD_Rhapsody/        # IBM Rhapsody SysML Project Files
│   └── diagrams/               # BDD, IBD, and Statecharts
├── images/                     # GUI Screenshots and Diagram exports
└── README.md
