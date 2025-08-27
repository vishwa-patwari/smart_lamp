Here’s the GitHub README for your code in the **same format and style** as the example you gave 👇

---

# ESP32 LDR & IR Based LED Control

This project demonstrates how to control an **LED** connected to an **ESP32** using **LDR (Light Dependent Resistor)** and **IR Sensor**. The LED automatically turns **ON/OFF** based on the surrounding light and object detection.

---

## 🚀 Features

* LED turns **ON** when it is dark **and** object is detected by the IR sensor.
* LED turns **OFF** when there is enough light **or** an object is not detected.
* Uses **ESP32 GPIO pins** to interface with LDR, IR sensor, and LED.
* Serial Monitor shows real-time LDR sensor readings.

---

## 🛠 Hardware Required

* ESP32 Development Board
* LDR Sensor (with resistor divider)
* IR Sensor Module
* LED (any color)
* Resistor (220Ω for LED)
* Breadboard & Jumper wires

---

## 📲 Software Required

* [Arduino IDE](https://www.arduino.cc/en/software)
* ESP32 board support installed in Arduino IDE

---

## ⚙️ Circuit Connection

| ESP32 Pin | Device     |
| --------- | ---------- |
| GPIO 5    | LDR Sensor |
| GPIO 15   | IR Sensor  |
| GPIO 2    | LED        |

* Connect LDR output to GPIO 5.
* Connect IR sensor output to GPIO 15.
* Connect LED anode (with 220Ω resistor) to GPIO 2, cathode to GND.

---

## 💻 Code Setup

1. Clone this repository:

   ```bash
   git clone https://github.com/your-username/esp32-ldr-ir-led.git
   cd esp32-ldr-ir-led
   ```

2. Open the code in **Arduino IDE**.

3. Select the correct board in **Tools → Board → ESP32 Dev Module**.

4. Upload the code to ESP32.

5. Open **Serial Monitor** at `9600 baud` to view LDR sensor values.

---

## 📷 Demo

### Circuit Diagram

<img width="876" height="502" alt="image" src="https://github.com/user-attachments/assets/731e788a-4d04-4010-a0bf-d32422fba93a" />


### Video Demo


https://github.com/user-attachments/assets/8a380942-d4dc-444d-af5a-c3a25433f7af




---

## 📝 License

This project is licensed under the MIT License – feel free to use and modify it.

---

