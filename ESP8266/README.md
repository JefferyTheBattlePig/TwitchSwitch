# TwitchSwitch

### Introduction:
This project is a twitch integrated MOSFET. So, if you have a sub, follow, or bit donation event, you can trigger one, two, or three different MOSFETs to go off




# Table of Contents
1. [Parts List](#parts-list)
2. [Setup](#setup)  
    1. [Circuit Diagram](#circuit-diagram)
    3. [Context Diagram](#context-diagram)
    4. [Run the Code](#run-the-code)
3. [Usage](#usage)




## Parts List
#### **NOTE: Links are just to showcase what it is you need to buy, they are not a recomendation to buy exactly what is linked.**

* [NodeMCU](https://www.amazon.com/HiLetgo-Internet-Development-Wireless-Micropython/dp/B010O1G1ES/ref=sr_1_1_sspa?crid=12F3K2Y8NTF3C&keywords=node+mcu&qid=1672520901&sprefix=node+mcu%2Caps%2C97&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExRlRMQTdOWldHUjg1JmVuY3J5cHRlZElkPUEwMTgzMDc1WEEzOVZSRzVUV0lMJmVuY3J5cHRlZEFkSWQ9QTAyNzc0NjIyRldZMDc1Uk9XMERDJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==)

* [MOSFET Driver Module](https://a.co/d/iY45j1C)
  
  - Get as many of these as you want events. If you want a catch all event, just get one, if you want an different event for follow or sub, get two, etc.
  - **Note:** MOSFET are just like a relay in a car, using a lower voltage (3.3V) to switch a higher voltage on (with the above listed you can go up to 24V <5A, though if you go above 1A attach a heatsink)

## Setup
This showcases a single switch setup.

### Circuit Diagram: 
![circuit (4)](https://github.com/JefferyTheBattlePig/TwitchSwitch/assets/35508608/29dafdcb-edb8-4d06-98d0-c192007ae26a)


For power for the microcontroller, you can have it come really from any 5V source. For instance, just plug in a micro usb cable in from a computer, battery bank, or wall wart. for your higher voltage source into the mosfet it can really be anything you want, **just make sure it's DC**

### Context Diagram
![image](https://github.com/JefferyTheBattlePig/TwitchSwitch/assets/35508608/dfe2f97e-7121-43a8-938e-8378d262420f)



### Run the Code
Flash the code to the NodeMCU. You can use whatever method you want, however I use the ArduinoIDE. You can find a tutorial on how to flash code on a NodeMCU using the ArduinoIDE [here](https://www.instructables.com/How-to-Program-NodeMCU-on-Arduino-IDE/)

## Usage
Basically just hook up whatever you want, servo motors, TENS units, anything eletric. Just make sure it's DC, and if your going for anything above like 120W make sure your MOSFET can handle it (the one linked can't go over 120W) and you know what your doing, don't anger the magic pixies in your walls by being a dumbass (they're mean).
