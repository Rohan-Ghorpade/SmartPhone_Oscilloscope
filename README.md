# SmartPhone_Oscilloscope
INTRODUCTION
In the realm of electronics, oscilloscopes and waveform generators are indispensable tools for analyzing and manipulating electrical signals. They play a crucial role in diagnostics, testing, and the development of various electronic systems. However, the high cost of these instruments often puts them out of reach for beginners, hobbyists, and small-scale experimenters. This project aims to bridge that gap by offering an affordable alternative: a DIY Smartphone Oscilloscope using the Raspberry Pi Pico and a Waveform Generator using the Arduino Nano.
The DIY Smartphone Oscilloscope leverages the capabilities of the Raspberry Pi Pico, a versatile and cost-effective microcontroller. By interfacing with a smartphone via an OTG (On-The-Go) connection and using software like Scoppy, this setup can display real-time electrical waveforms on the smartphone screen. This solution provides a significant advantage over traditional multimeters, which are unable to capture transient or rapidly changing signals. The DIY oscilloscope offers a practical and economical approach for electronics enthusiasts and professionals alike, making signal analysis accessible to a broader audience.


In parallel, the Waveform Generator project utilizes the Arduino Nano to produce various waveforms, including sine, square, and triangular waves. The generator offers adjustable frequency and amplitude, making it a versatile tool for testing and experimentation. While not intended for industrial-grade applications, this DIY waveform generator serves as an excellent educational tool and a valuable resource for hobby projects. It demonstrates the potential of microcontroller-based systems in creating functional and useful electronic devices.
Together, these projects not only provide essential tools for electronics experimentation but also foster a deeper understanding of the underlying principles of signal generation and analysis. This introduction sets the stage for exploring the detailed construction, setup, and functionality of the DIY Smartphone Oscilloscope and Waveform Generator, highlighting their significance and practicality in modern electronics exploration.

 
## Theoretical Background
### 1. Definition and Purpose

An oscilloscope is a crucial instrument used in electronics to visualize and analyze electrical signals. It displays the waveform of a signal, showing how the voltage varies over time. This visualization helps in understanding the signal's behavior, frequency, amplitude, and other key characteristics.

### 2. Types of Oscilloscopes

•	Analog Oscilloscopes: These use cathode ray tubes (CRTs) to display signals. They are known for their continuous signal representation but are largely obsolete due to digital advancements.
•	Digital Oscilloscopes: These capture and digitize signals using analog-to-digital converters (ADCs). They offer advanced features like storage, signal processing, and multiple trigger options, making them more versatile and widely used today.

![Alt text](https://github.com/Rohan-Ghorpade/SmartPhone_Oscilloscope/blob/b3ae37bd45f7daddf93e395d8f62f080b0f9a5c2/cro_Cathode%20Ray%20Oscilloscope.jpg)

### 3. Key Parameters
•	Time Base: Determines how the horizontal axis (time) is scaled. It affects the display of signal duration and waveform details.
•	Sampling Rate: The rate at which the oscilloscope captures signal samples. Higher sampling rates provide better resolution and accuracy.
•	Bandwidth: The range of frequencies an oscilloscope can accurately measure. Higher bandwidth allows the measurement of faster signals.
•	Triggering: A feature that stabilizes the waveform display by initiating sampling at a specific point in the signal. It helps in capturing repetitive signals and viewing transient events.
### 4. Applications Oscilloscopes are used in various applications, including:
•	Troubleshooting Electronic Devices: Identifying faults by analyzing signal behavior.
•	Design and Development: Testing and refining electronic circuits and systems.
•	Educational Purposes: Teaching concepts of signal processing and electronics.

## Waveform Generation Fundamentals
### 1. Definition and Purpose A waveform generator is a device that produces electrical signals of various shapes, such as sine, square, triangular, and sawtooth waves. It is essential for testing and simulating signals in electronic circuits.
### 2. Types of Waveforms
•	Sine Wave: Smooth, periodic oscillation often used to simulate AC signals or test audio equipment.
•	Square Wave: Characterized by abrupt transitions between high and low states, useful for digital circuit testing and timing applications.
•	Triangular Wave: Linear ramp up and down, often used in signal modulation and audio testing.
•	Sawtooth Wave: Characterized by a linear rise and abrupt fall, used in applications like sweep generators and certain types of modulation.

![Alt text](https://github.com/Rohan-Ghorpade/SmartPhone_Oscilloscope/blob/d58ba2e1a86746ffe3f32725d70364357fa39bdf/waveforms.jpg)


### 3. Key Parameters
•	Frequency: The number of cycles per second (Hz) that the waveform completes. It determines the speed of oscillation.
•	Amplitude: The peak value of the waveform. It defines the signal strength.
•	Duty Cycle: The percentage of time the waveform is in the high state during one cycle, especially relevant for square waves.
•	Phase: The shift of the waveform relative to a reference point, important for signal synchronization.
### 4. Applications Waveform generators are used for:
•	Testing and Calibration: Providing known signals to test and calibrate electronic devices.
•	Signal Simulation: Generating test signals for circuit development and analysis.
•	Educational Demonstrations: Teaching waveform characteristics and signal processing principles.



## DIY Smartphone Oscilloscope & Waveform Generator Using Raspberry Pi Pico and Arduino Nano

### 1. DIY Smartphone Oscilloscope with Raspberry Pi Pico The DIY Smartphone Oscilloscope project uses the Raspberry Pi Pico microcontroller to capture and analyze electrical signals. By interfacing with a smartphone using OTG (On-The-Go) and employing Scoppy, a free oscilloscope application, users can visualize waveforms directly on their phone. This setup is cost-effective and portable, providing a valuable tool for electronics experimentation without the need for expensive commercial equipment.
### 2. DIY Waveform Generator with Arduino Nano The DIY Waveform Generator project utilizes the Arduino Nano to produce various types of waveforms, including square and sine waves. This generator is capable of adjusting the frequency and amplitude of the signals, making it suitable for a range of applications, from basic circuit testing to educational demonstrations. While not designed for high-precision industrial use, it offers a practical solution for hobbyists and provides hands-on experience in signal generation and control.
Together, these projects demonstrate how microcontroller technology can be harnessed to create functional and affordable electronic tools. They provide practical experience in both signal analysis and generation, making them valuable additions to any electronics enthusiast's toolkit.
 
## Components Needed for DIY Waveform Generator and Smartphone Oscilloscope
Components for Waveform Generator (Using Arduino Nano)
### 1.	Arduino Nano
o	The main microcontroller used for generating waveforms. It provides the necessary processing power and interfaces for output.
### 2.	16x2 Alphanumeric LCD Display
o	Used for displaying the frequency, waveform type, and other relevant information to the user. It enhances the user interface, allowing easy monitoring and adjustments.
### 3.	Rotary Encoder
o	Allows the user to adjust parameters such as frequency and waveform type. It provides a tactile way to navigate through options and make precise adjustments.
### 4.	Resistors
o	5.6K Ohm Resistor: Used in the circuit for limiting current and voltage division.
o	10K Ohm Resistor: Also used for limiting current and setting up voltage dividers or pull-up/pull-down configurations.
### 5.	Capacitor (0.1uF)
o	Used for filtering and stabilizing power supply to the components, reducing noise and improving signal integrity.
### 6.	Perf Board
o	A perforated board used for assembling and soldering the components. It allows for creating a more permanent and reliable circuit compared to a breadboard.
### 7.	Header Pins
o	Used to connect components like the Arduino Nano and LCD to the perf board securely, allowing for easy replacement or upgrade of parts.
### 8.	Soldering Kit
o	Necessary for assembling the components on the perf board. It includes a soldering iron, solder, flux, and other tools needed for soldering.
## Components for Smartphone Oscilloscope (Using Raspberry Pi Pico)
### 1.	Raspberry Pi Pico RP2040 Board
o	The primary microcontroller used for capturing and processing the analog signals. It sends data to the connected smartphone for display using an oscilloscope app.
### 2.	Resistors
o	100K Ohm Resistor: Part of a voltage divider circuit used to scale down input signals to safe levels for the ADC inputs of the Raspberry Pi Pico.
o	1K Ohm Resistor: Also used in the voltage divider or other circuit protection roles.
### 3.	Breadboard
o	Used for prototyping the circuit. It allows easy insertion and removal of components without soldering, facilitating rapid experimentation and troubleshooting.
### 4.	Micro-USB Cable
o	Connects the Raspberry Pi Pico to a smartphone or computer. This cable is also used for powering the Pico and uploading the firmware.
### 5.	Connecting Wires
o	Essential for connecting different components together on the breadboard and between modules. These wires can be male-to-male, male-to-female, or female-to-female, depending on the specific connections needed.


 
### About Arduino Nano
The Arduino Nano is a small, compact microcontroller board designed for embedded systems and electronics projects. It is one of the most popular and widely used Arduino boards due to its size, versatility, and ease of use. The Arduino Nano is ideal for applications where space is limited but full microcontroller functionality is needed.

![Alt text](https://github.com/Rohan-Ghorpade/SmartPhone_Oscilloscope/blob/a9cbceeff0ef351e66eb68842ed07c3cacf5e822/arduino_nano.jpg)


Key Features and Specifications
### 1.	Microcontroller: ATmega328P
o	The core of the Arduino Nano is the ATmega328P microcontroller, an 8-bit AVR RISC-based processor. It is the same microcontroller used in the Arduino Uno, offering robust performance and a wide range of features.
### 2.	Clock Speed
o	The ATmega328P operates at a clock speed of 16 MHz, providing sufficient processing power for various tasks including control, data processing, and communication.
### 3.	Memory
o	Flash Memory: The Nano includes 32KB of flash memory for storing code and data. This allows for relatively complex programs and data storage.
o	SRAM: It has 2KB of SRAM for runtime data storage.
o	EEPROM: The board includes 1KB of EEPROM, which can be used to store non-volatile data that needs to be preserved across reboots.
### 4.	I/O Capabilities
o	Digital I/O Pins: The Arduino Nano has 14 digital input/output pins, 6 of which can be used as PWM (Pulse Width Modulation) outputs.
o	Analog Input Pins: It provides 8 analog input pins, allowing it to read analog signals from sensors and convert them to digital values.
o	PWM Outputs: The board supports PWM on 6 digital pins, useful for tasks such as motor control and dimming LEDs.
### 5.	Connectivity
o	USB Connectivity: The Nano features a mini-USB port for programming and power. It uses a USB-to-serial converter chip, typically the FT232 or CH340, to interface with a computer.
o	Communication Protocols: The board supports standard communication protocols like UART, SPI, and I2C, enabling easy integration with other devices and sensors.
### 6.	Power Supply
o	The Arduino Nano can be powered via USB or an external power source. It supports an input voltage range of 7-12V through the Vin pin and operates at 5V.
### 7.	Form Factor
o	The Nano has a small form factor, approximately 45mm x 18mm, making it suitable for projects with limited space. It includes male headers that can be used to mount the board on a breadboard or a custom PCB.
## Applications and Use Cases
### 1.	Prototyping and Development
o	Due to its small size and versatility, the Arduino Nano is a popular choice for rapid prototyping. It allows developers to quickly test and iterate on ideas before committing to a final design.
### 2.	Embedded Systems
o	The Nano is used in various embedded systems, such as home automation, wearable devices, and robotics. Its I/O capabilities and communication support make it suitable for controlling sensors, actuators, and communication modules.
### 3.	Educational Projects
o	It is widely used in educational settings for teaching programming, electronics, and embedded systems. The Arduino ecosystem, with its extensive libraries and community support, makes the Nano accessible to beginners.
### 4.	DIY Projects
o	Hobbyists use the Arduino Nano for a wide range of DIY projects, from simple tasks like controlling LEDs and motors to complex systems involving sensors and wireless communication.
## Summary
The Arduino Nano is a powerful, flexible microcontroller board that strikes a balance between size and functionality. Its compatibility with the Arduino IDE, coupled with a rich set of features, makes it an excellent choice for both beginners and experienced developers. Whether used for educational purposes, DIY projects, or professional prototyping, the Arduino Nano provides a reliable and versatile platform for a myriad of applications.


## wiring diagram

![Alt text](https://github.com/Rohan-Ghorpade/SmartPhone_Oscilloscope/blob/0673c2acaec3ecddd24f816dc5e0246e280783e0/wiring.jpg)

Arduino Pin	Connected to

D14	Connected to RS of LCD

D15	Connected to RN of LCD

D4	Connected to D4 of LCD

D3	Connected to D5 of LCD

D6	Connected to D6 of LCD

D7	Connected to D7 of LCD

D10	Connect to Rotary Encoder 2

D11	Connect to Rotary Encoder 3

D12	Connect to Rotary Encoder 4

D9	Outputs square wave

D2	Connect to D9 of Arduino

D5	Outputs SPWM then converted to sine

## Producing Square Wave with Variable Frequency
People who are using Arduino might be familiar that Arduino can produce PWM signals simply by using the analog write function. But this function is limited only to control the duty cycle of the PWM signal and not the frequency of the signal. But for a waveform generator we need a PWM signal whose frequency can be controlled. This can be done by directly controlling the Timers of the Arduino and toggling a GPIO pin based on it. But there are some pre-built libraries which do just the same and can be used as such. The library that we are using is the Arduino PWM Frequency Library. We will discuss more about this library in the coding section.
 
There are some drawbacks with this library as well, because the library alters the default Timer 1 and Timer 2 settings in Arduino. Hence you will no longer be able to use servo library or any other timer related library with your Arduino. Also the analog write function on pins 9,10,11 & 13 uses Timer 1 and Timer 2 hence you will not be able to produce SPWM on those pins.
The advantage of this library is that it does not disturb the Timer 0 of your Arduino, which is more vital than Timer 1 and Timer 2. Because of this you are free to use the delay function and millis() function without any problem. Also the pins 5 and 6 are controlled by Timer 0 hence we won’t be having problem in using analog write or servo control operation on those pins. Initially it took some time for me to figure this out and that is why the wiring is messed up a bit.
Here we have also built one Simple Square waveform generator, but to change the frequency of waveform you have to replace Resistor or capacitor, and it will hard to get the required frequency.

![Alt text](https://github.com/Rohan-Ghorpade/SmartPhone_Oscilloscope/blob/91e7bc15310c5136febebdf25425baf0f7c58390/waveform_interface.jpg)

## Oscilloscope Screen & Interfaces

1. Install the Scoppy Android App
Install the Scoppy Android app from the Play Store.
2. Install the firmware onto your Pico
Download the firmware onto your computer. It is here: pico-scoppy-v8.uf2.
Press the bootsel button on your Pico and connect it to your computer. Copy the uf2 file onto your Pico. The onboard LED should start blinking.
3. Connect the Pico to your Phone/Tablet
Attach the OTG adapter/cable to the USB input of the Android device. The other end attaches to the USB cable you have connected to your Pico.
4. Start Scoppy
Attach the +ve output of your signal source to GPIO26 of the Pico and the ground to gnd. This will allow you to measure signals between 0V and 3.3V. Of course, the signal voltage should be within the allowed range of the ADC pins of the RP2040. For Channel 2, connect the signal to GPIO27.
If you don’t have a suitable signal source you can view the test signal on GPIO 22 by connecting it directly to the ADC pins (GPIO 26 and 27). GPIO 22 is a 1kHz square wave with a duty cycle of 50%.
Here is the interface of Scoppy Oscilloscope. The screen looks similar to that of the oscilloscope. On the right bottom, there is an option to select the input signal. The input signal can be fed via a USB port. But for demonstration, the app developer has given a demo signal. The demo signal is in the form of the sine wave which has a frequency of 50Hz.

![Alt text](https://github.com/Rohan-Ghorpade/SmartPhone_Oscilloscope/blob/8e0c480873361d2e797e2f597edfc7f4bff8ef21/scoopy_app_interface.jpg)

 
You can slide left and right and see the signal performance. On the right side, the horizontal and vertical adjustment options are available. The trigger option is also there for looking up the signal. You can select off, auto, and normal mode under the trigger function. From here time per division can be manually adjusted. Similarly, you can also adjust the volt per division functionality. To learn more about other functionality, you can manually verify all other functions.
The oscilloscope is a dual-channel oscilloscope where multiple signals can be read. Each of the channels can be turned On or Off and measurements parameters can be adjusted. For the demo signal, you can use both the channel1 and channel2 signals. But if you switch the mode to USB, you will only get 1 channel. To use the 2nd channel, you need to upgrade to the premium version. The app is so good that you can pay an extra amount to get another channel too. Anyway, we will only be using a single channel for testing our signal.
Now the question is how to feed an external signal to a DIY Smartphone Oscilloscope? For this, we will use a very high-value resistor called 100K resistor and connect it across the GP26 Pin. This will protect the Pi Pico from over current. Similarly, we need a pair of 1K resistors. One resistor should be connected to the GND pin and another one to the 3.3V pin. Then join the other end of the resistor together. We are doing this because we need to measure both the negative and positive signals.

Here is a schematic for the application. We will feed the signal from the function generator to this GP26 pin via a 100K resistor. And the other Pin is the virtual ground pin. While supplying an input signal, both these pins are used.

We need this OTG device to connect the Pi Pico to Smartphone. This OTG is easily available in the market. Connect the USB OTG to your Smartphone and another end to the Raspberry Pi Pico Board. On your smartphone, you will see a pop-up window appearing. It will ask to allow scoppy to access the Pico. Click on OK. 

![Alt text](https://github.com/Rohan-Ghorpade/SmartPhone_Oscilloscope/blob/8e0c480873361d2e797e2f597edfc7f4bff8ef21/scoopy_app_connecting.jpg)


Testing External Signals
We need a function generator here to test this DIY Smartphone Oscilloscope. But I don’t have a function generator. So I designed a signal generator using Arduino and a Rotary encoder. Using this function generator I can generate a square wave with variable frequency. You can also buy an 8$ XR2206 Function Generator Assembly kit.



## 🎓 Educational Impact

- Provides hands-on learning in microcontroller programming
- Teaches principles of signal analysis and waveform synthesis
- Promotes affordable electronics experimentation


## 📚 References

- [Scoppy GitHub](https://github.com/stonez56/scoppy)
- [Arduino PWM Frequency Library](https://playground.arduino.cc/Code/FrequencyTimer2/)
- Tutorials from HowToElectronics, Instructables, and Tom’s Hardware


## 🧪 Future Improvements

- Add triangular/sawtooth waveform support
- Use DAC for smoother sine waves
- Upgrade to dual-channel oscilloscope support (Scoppy Premium)


## 📸 images

![Alt text](https://github.com/Rohan-Ghorpade/SmartPhone_Oscilloscope/blob/b7865bcdf7431f0efa98162b84a360588cccba8e/main_images.jpg)



