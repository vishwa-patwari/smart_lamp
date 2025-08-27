# ESP32 Smart LED Control with LDR & IR Sensor

This project demonstrates how to control an **LED (or a 9W AC bulb via relay module)** using an **LDR (Light Dependent Resistor)** and an **IR sensor** connected to an **ESP32**.  

The system works as follows:  
* If **LDR detects light (HIGH)** OR **IR sensor detects an obstacle (LOW)** → LED will **turn OFF**  
* Otherwise → LED will **turn ON**

---

## 🚀 Features

* Automatic LED control based on **light intensity** and **IR sensor input**.  
* Simple and cost-effective smart home automation setup.  
* Can be scaled to control a **9W bulb** using a relay module.  
* Real-time monitoring through **Serial Monitor**.  

---

## 🛠 Hardware Required

* ESP32 Development Board  
* LDR module (digital output)  
* IR sensor module (digital output)  
* LED (or Relay + 9W bulb)  
* Jumper wires  
* Breadboard (optional)  

⚠️ **Note:** If you are using a 9W bulb, connect it safely via a relay module. Avoid handling AC wires directly.

---

## 📲 Software Required

* [Arduino IDE](https://www.arduino.cc/en/software)  
* ESP32 board support installed in Arduino IDE  

---

## ⚙️ Circuit Connection

| ESP32 Pin | Device       |
| --------- | ------------ |
| GPIO 5    | LDR Output   |
| GPIO 15   | IR Sensor    |
| GPIO 2    | LED / Relay  |

Relay Output side (if controlling bulb):  
* **COM → AC Live input**  
* **NO → Bulb Live wire**  
* **Neutral → Bulb Neutral**  

---

## 💻 Code Setup

1. Clone this repository:

   ```bash
   git clone https://github.com/your-username/esp32-ldr-ir-led.git
   cd esp32-ldr-ir-led
