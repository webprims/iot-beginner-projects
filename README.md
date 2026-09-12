# IoT Beginner Projects

Beginner-friendly IoT and embedded-system examples maintained by **WebPrims**. The goal is to help students understand how sensors, microcontrollers, Wi-Fi, MQTT, and simple automation work through small practical projects.

## What you'll learn

- Digital output with LEDs
- Reading buttons and sensors
- Analog input basics
- ESP32 Wi-Fi connection
- Simple web-controlled devices
- MQTT publish/subscribe concepts
- Temperature and humidity monitoring
- Basic automation logic
- PIR motion detection and timer-based control

## Suggested hardware

- ESP32 development board
- Breadboard
- LEDs and resistors
- Push button
- DHT11/DHT22 sensor
- LDR/light sensor
- PIR motion sensor
- Jumper wires

## Repository structure

```text
iot-beginner-projects/
├── 01-led-blink/
├── 02-button-input/
├── 03-analog-sensor/
├── 04-wifi-connection/
├── 05-web-led-control/
├── 06-mqtt-publisher/
├── 07-dht-monitor/
├── 08-smart-light-logic/
└── 09-motion-activated-light/
```

## Latest project

`09-motion-activated-light` uses an ESP32, PIR sensor, and LED to demonstrate a practical automation pattern: detect movement, switch a light on, and automatically turn it off after a timeout.

## How to use these examples

Most examples are written for **ESP32 with the Arduino framework**. Open the `.ino` file in Arduino IDE or PlatformIO, choose the correct board and port, then upload it.

For Wi-Fi and MQTT examples, replace placeholder credentials with your own local test values before uploading.

## Learning approach

Don't stop at uploading the sketch. Change the pin numbers, thresholds, delay values, topics, and logic. Observe what changes and use the Serial Monitor to debug.

## Learn IoT with WebPrims

WebPrims focuses on practical, project-driven learning in IoT, software development, AI, and Full Stack technologies.

- IoT Smart Connected Systems: https://www.webprims.com/iot-smart-connected-systems
- Official Website: https://www.webprims.com/
- GitHub: https://github.com/webprims

## Safety

These examples are designed for low-voltage development boards and beginner electronics. Do not connect mains electricity or high-power loads directly to a microcontroller.

## License

Provided for learning and educational use by WebPrims.
