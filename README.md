# Arduino-Based-Temperature-and-Humidity-Monitoring-System

This project is a real-time environmental monitoring system that measures temperature and humidity using a DHT22 sensor and displays the data through Serial Monitor. The system can be extended to IoT platforms like Node-RED, InfluxDB, and Grafana for visualization.

# Flow diagram of the Project
<img width="1536" height="1024" alt="ChatGPT Image Mar 2, 2026, 08_05_36 PM" src="https://github.com/user-attachments/assets/04bb919a-1f58-4a98-bbef-4b197f922462" />

# Hardware Schematic

<img width="612" height="542" alt="image" src="https://github.com/user-attachments/assets/77166c1a-9036-453f-9ed8-20eed6c838f2" />

# Program Description

The Arduino:

Reads temperature and humidity values from DHT22.

Checks for sensor errors.

Prints the data in JSON format.

Updates every 5 seconds.

# Example Output:

{"temperature":27.50,"humidity":61.20}
