# Lcd_project
# LCD Control Module using ESP32 (16x2 Character LCD)

## 📘 Project Overview

This project implements a custom LCD driver for controlling a 16x2 character LCD using the ESP32 and the ESP-IDF framework. The LCD is controlled in 4-bit mode using only GPIO and timers—*no external libraries* like hd44780 are used. This driver supports text display and scrolling animations.

---

## 🎯 Objective

- Interface a 16x2 LCD with ESP32 using GPIO
- Write your own driver logic without using prebuilt LCD libraries
- Display and scroll custom text
- Build a reusable component module (lcd/) for integration in other projects

---

