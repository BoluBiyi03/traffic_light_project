# Traffic Light Using Arduino Uno
## Date
25th March, 2024
## By
[Oluwabiyi Boluwatife](https://github.com/BoluBiyi03)
# Introduction 
Traffic lights serves as an engaging endeavor for those delving into electronics, programming, or engineering, offering a practical exploration of traffic management systems.They are a ubiquitous feature of modern urban infrastructure, crucial for managing traffic flow and ensuring road safety. Creating a simulated traffic light system can be an excellent project for beginners in electronics, programming, or engineering. This project typically involves building a miniature version of a traffic light system using electronic components such as LEDs, resistors, and arduino.
# Purpose
The primary aim of this project is to replicate the operational dynamics of actual traffic lights using electronic components and programming techniques. This entails constructing a system capable of cycling through the customary sequence of green, yellow, and red lights to regulate traffic flow effectively.
# Required Hardware 
1) Light Emitting Diode (LED)
2) Arduino Uno
3) Power Supply
4) Resistors
5) Breadboard or Prototype Board 
6) Wiring 
# Circuit Design 
[Schematic Design](https://drive.google.com/file/d/1xHaP6KMQfkf0cjm10CA0hKH5OrJzOAcB/view?usp=sharing)

[Circuit Maker](https://drive.google.com/file/d/16pxg52J_av2PnOgNE4UVk21A8iz0Mnv0/view?usp=sharing)
# Source Code 
```cpp
/*This is a project on traffic light
By Oluwabiyi Boluwatife Joshua 
The purpose is to control the flow of traffic
*/

// Declare the pins
const int Red_LED = 8;
const int Yellow_LED = 9;
const int Green_LED = 10;

void setup()
{
  // Set the pins as outputs
  pinMode(Red_LED, OUTPUT);
  pinMode(Yellow_LED, OUTPUT);
  pinMode(Green_LED, OUTPUT);
}

void loop()
{
  // Turn on Red LED
  digitalWrite(Red_LED, HIGH);
  delay(3000);
  digitalWrite(Red_LED, LOW);  // Turn off Red LED

  // Turn on Yellow LED
  digitalWrite(Yellow_LED, HIGH);
  delay(1000);
  digitalWrite(Yellow_LED, LOW);  // Turn off Yellow LED

  // Turn on Green LED
  digitalWrite(Green_LED, HIGH);
  delay(3000);
  digitalWrite(Green_LED, LOW);  // Turn off Green LED
}
```
## Source Code Demo
```cpp
/*This is a project on traffic light
By Oluwabiyi Boluwatife Joshua 
The purpose is to control the flow of traffic
*/
// Declare the pins 
const int Red_LED = 8;
const int Yellow_LED = 9;
const int Green_LED = 10;

void setup()
{
  //Set the pins as outputs 
  pinMode(Red_LED, OUTPUT);
  pinMode(Yellow_LED, OUTPUT);
  pinMode(Green_LED, OUTPUT);
}

void loop() 
{
  //Turn on all the LED
  digitalWrite(Red_LED, HIGH);
  delay(3000);
  digitalWrite(Yellow_LED, HIGH);
  delay(1000);
  digitalWrite(Green_LED, HIGH);
  delay(3000);

}

void changeLedState(int ledPin)
{
  if (ledPin == Red_LED) 
  {
    // Set only the Red_LED to on while the others are off 
    digitalWrite(Red_LED, HIGH);
    delay(3000);
    digitalWrite(Yellow_LED, LOW);
    delay(1000);
    digitalWrite(Green_LED, LOW);
    delay(1000);
  
  }
  else if (ledPin == Yellow_LED) 
  {
    //Set only the Yellow_LED to on while the others are off
    digitalWrite(Red_LED, LOW);
    delay(3000);
    digitalWrite(Yellow_LED, HIGH);
    delay(1000);
    digitalWrite(Green_LED, LOW);
    delay(3000);
  }
  else if (ledPin == Green_LED) 
  {
    //Set only the Green_LED to on while the others are off
    digitalWrite(Red_LED, LOW);
    delay(3000);
    digitalWrite(Yellow_LED, LOW);
    delay(3000);
    digitalWrite(Green_LED, HIGH);
    delay(3000);
  }
  else 
  {
    //Set all the LED to off 
    digitalWrite(Red_LED, LOW);
    delay(1000);
    digitalWrite(Yellow_LED, LOW);
    delay(1000);
    digitalWrite(Green_LED, LOW);
    delay(1000);
  }

  delay(3000);
}
```
# HEX File
[text](traffic_light_2_sketch/sketch_mar24a.ino.hex)
# Working Principle
The working principle of a simulated traffic light system involves replicating the sequential operation of real-world traffic lights through electronic components and programmed logic. Here's a breakdown of the fundamental working principles:

1. **Sequential Timing:** The traffic light system follows a predetermined sequence of lights – typically green, yellow, and red – for different directions of traffic flow. Each light remains illuminated for a specific duration before transitioning to the next phase.

2. **Microcontroller Control:** The Arduino serves as the brain of the traffic light system. It executes programmed instructions to control the timing and sequencing of the lights. The microcontroller receives input from sensors or internal timers to initiate light changes.

3. **LED Illumination:** Light-Emitting Diodes (LEDs) act as the visual indicators of the traffic lights. Different colored LEDs represent each phase of the traffic light sequence – green for "go," yellow for "prepare to stop," and red for "stop."

4. **Resistor Limitation:** Resistors are used to limit the current flowing through the LEDs, preventing them from burning out due to excessive current. Each LED is connected in series with a resistor to ensure proper operation and longevity.

5. **Circuit Connectivity:** The LEDs, resistors, and Arduino are interconnected on a breadboard or a custom-designed circuit board. Wires establish connections between the components, facilitating the flow of electricity and data signals.

6. **Programming Logic:** The Arduino is programmed with logic to govern the behavior of the traffic lights. This programming includes defining the duration for each light to remain illuminated, the transitions between lights, and any additional features such as pedestrian signals or vehicle detection.

7. **Execution and Iteration:** Once the circuit is assembled and programmed, the traffic light system executes its sequence autonomously. It iterates through the programmed phases, regulating traffic flow and simulating the operation of real-world traffic lights.

By adhering to these working principles, the simulated traffic light system provides a tangible demonstration of traffic management concepts, offering valuable insights into electronics, programming, and system design.
# Advantages 
1) **Enhanced Traffic Flow:** By dynamically adjusting signal timings based on real-time data, our smart traffic lights will reduce congestion and keep traffic moving smoothly. This means shorter travel times for commuters.

2) **Improved Safety:** Well-coordinated traffic lights minimize the risk of accidents at intersections. Pedestrian countdowns and emergency vehicle preemption enhance safety for all road users.  

3) **Energy Efficiency:** Optimized signal timings reduce unnecessary idling, leading to energy savings and lower emissions. Our project aligns with sustainability goals.

4) **Adaptability:** Our system can adapt to changing traffic patterns, special events, and weather conditions. It’s future-proof and resilient.

5) **Community Impact:** A well-functioning traffic light system positively impacts everyone—commuters, pedestrians, and emergency services.
# Disadvantages
1) **Initial Cost:** Implementing smart traffic lights requires an upfront investment in sensors, infrastructure, and software development. Funding can be a challenge.

2) **Maintenance Complexity:** With multiple sensors and algorithms, maintenance becomes more intricate. Regular checks and updates are essential.

3) **Dependency on Technology:** If sensors fail or algorithms malfunction, it could disrupt traffic flow. Backup systems are crucial.

4) **Privacy Concerns:** Cameras and sensors collect data, raising privacy questions. Striking a balance between data utilization and privacy is vital.

5) **Public Acceptance:** Introducing a new system may face resistance from the public. Education and awareness campaigns are necessary.
# Output
[pictures](https://drive.google.com/file/d/1HlRCPpXXlnnIJas-4UJmtzsfKO061bxa/view?usp=sharing)

[video](https://drive.google.com/file/d/1pzIs3RVgRgLr0sODCjuUq2E7RRinvZKP/view?usp=sharing)
# Summary
The simulated traffic light project entails constructing a miniature version of a traffic light system using electronic components and programming. It serves as an engaging learning opportunity for beginners in electronics, programming, or engineering. The project's working principle involves replicating the sequential operation of real-world traffic lights through a microcontroller-controlled system. Light-emitting diodes (LEDs) represent the different phases of the traffic light sequence, with resistors ensuring proper current limitation. The microcontroller executes programmed logic to regulate the timing and sequencing of the lights, simulating traffic flow management. By assembling and programming the circuit, participants gain practical insights into electronics, programming, and system design while exploring the significance of technology in urban infrastructure. Ultimately, the project fosters creativity, problem-solving skills, and a deeper understanding of traffic control principles.





