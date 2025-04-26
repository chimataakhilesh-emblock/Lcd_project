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

This project shows how to connect a 16x2 LCD to an ESP32 in 4-bit mode, and also how to scroll text from right to left.

The following Steps: 

1. Connected LCD to ESP32

RS, EN, D4–D7 pins are connected to ESP32 GPIOs.

2. Sent Data in 4-bit Mode

8-bit data is split into two 4-bit parts and sent to LCD.

3. Initialized the LCD

Set LCD into 4-bit mode, 2-line display, cursor OFF, no blinking.

4. Printed Text

Displayed static text on the screen.

5. Added Scrolling Functionality

Text moves from right to left across the LCD.

Main Functions Now

lcd_init() – Initialize the LCD.

lcd_write_char(c) – Write a single character.

lcd_write_string(str) – Write a full string.

void lcd_write_command(uint8_t cmd) – Scroll the screen left.

---

How Scrolling Works

Sending the command 0x18 (Shift Display Left) to LCD again and again after a small delay.

This makes the displayed text move left smoothly.

---

Summary

We built a simple LCD driver in 4-bit mode, printed a name, and added a smooth scrolling effect using basic LCD commands!

---
