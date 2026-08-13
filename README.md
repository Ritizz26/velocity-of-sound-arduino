#Experimental Determination of the Speed of Sound Using Arduino

An Arduino-based experimental system designed to determine the speed of sound in air using ultrasonic time-of-flight measurement.

Project Overview

This project combines physics and electronics to experimentally determine the speed of sound using an HC-SR04 ultrasonic sensor. A DHT11 temperature sensor measures the ambient temperature, while a 16×2 I²C LCD displays the measured temperature and calculated velocity.

The experimental value is converted to its equivalent value at STP and compared with the accepted value of 331.1 m/s.

Hardware
Arduino UNO
HC-SR04 Ultrasonic Sensor
DHT11 Temperature Sensor
16×2 I²C LCD
Breadboard
Jumper wires
Main Concept

The experimental speed is calculated using:

v=2d/t
	​


where d is the distance between the sensor and reflecting surface and t is the round-trip travel time.

Results

Average experimental temperature: 26.98 °C
Experimental speed: 340.96 m/s
Calculated speed at STP: 323.65 m/s
Accepted value: 331.1 m/s
Percentage error: 2.24 %
