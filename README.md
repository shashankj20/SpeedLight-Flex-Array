SpeedFlex Light Array
1. Description:
The SpeedFlex Light Array is an Arduino-based project that creates a dynamic light display using LEDs controlled by a potentiometer. The speed of the LED sequence is adjustable based on the potentiometer's position.

2. Components Lists:
Arduino Nano
Breadboard
Red LED x 2
Yellow LED x 2
Green LED x 2
Blue LED x 2
220 Ohm Resistor x 8
Potentiometer

3. Connection Guide:
Connect the anodes (+) of each LED to digital pins 2 through 9 on the Arduino Nano, using a 220 Ohm resistor in series with each LED.
Connect the cathodes (-) of all LEDs together and to ground (GND) on the Arduino Nano.
Connect one leg of the potentiometer to 5V on the Arduino Nano, the other leg to GND, and the middle leg to analog pin A0.

4. Usage:
Upload the provided code to your Arduino Nano using the Arduino IDE.
Power the Arduino Nano.
Adjust the potentiometer to control the speed of the LED sequence.

5. Functionality:
The Arduino reads the position of the potentiometer, mapping it to a delay time for LED animation.
LEDs are sequentially turned on and off, creating a shifting light effect.
The speed of the LED sequence is determined by the potentiometer's position, with faster speeds corresponding to higher potentiometer values.

6. Customization:
Modify the number or arrangement of LEDs by changing the array ledPins[].
Adjust the delay time range in the map() function to customize the speed range of the LED sequence.

7. Author:
Shashank J

8. License:
This project is licensed under the MIT License. Feel free to use and modify it for your own purposes, but please attribute the original author.
