# HopBot

##  ABSTRACT:
 Hop bot is used to jump over any obstacle of height of comparable dimension to that of the bot. Motor, Springs and Gears are used for its proper functioning along with a pair of Non-motorized wheels.

![Image](https://github.com/pabbathisowmya/HopBot/blob/master/Images/Mechanical%20cad.jpg)

## INTRODUCTION:
 A jumping robot can cross the obstacle several times its own height.Military and disaster management teams sometimes come across situations where they need a robot which can be operated in any terrain. There we need hop bot which occupies less space, could skip obstacles by jumping mechanism.
 While designing we took hint from the hoping of locust and grasshopper. In nature, a locust will first orient its body to the desired direction with its forelegs and then propel its jumps via rapid movement of its hind legs, thereby converting stored energy to the acceleration of its body. 
 Here we used the springs for replacing the muscle power. The spring has the advantages of strong energy storage, fast energy release, simple structure, and simple control.

## MECHANICAL ASPECTS: 

###  DC MOTOR:
#### _Design:_ 
 DC motors take electrical power through direct current, and convert this energy into mechanical rotation. DC motors use magnetic fields that occur from the electrical currents generated, which powers the movement of a rotor fixed within the output shaft. The output torque and speed depends upon both the electrical input and the design of the motor.
#### _Motto of usage:_
 Speed control and output range.  DC motors offer better speed variation and control and produce more torque than AC motors.

###  WORM DRIVE:
####  _Design:_
 Worm has two parts in which a worm gear meshes with a worm wheel. These together help in power transmission.The worm wheel is similar to spur gear.
#### _Power transmission_: 
 Left hand and right hand worm: a right hand worm gear moves in clockwise direction regarding observer and a left hand worm gear moves in anticlockwise direction regarding observer.
#### _Motto of usage:_
 Worm drive was used to reduce rotational speed and   transmit higher torque. They transfer motion in 90 degrees.
#### _Mechanism:_
 The shaft of a DC Motor is connected to worm gear and worm gear is connected to worm wheel. When the shaft of motor rotates, the worm gear starts rotating and due to meshing worm wheel also rotates and transmission takes place. And this worm wheel is connected to a spur gear of 2pi/3 teeth through a shaft.

<center>
<img src= "https://github.com/pabbathisowmya/HopBot/blob/master/Images/Gears%20Arangement.jpg">
</center>
 
### SPUR GEAR:
#### _Design:_
 Spur gear contains a cylindrical visualization with teeth radiating. Spur gear comes with different dimensions in which their radius, pressure angle and inclination of teeth with respect to axis of rotation, diametral pitch can be changed.  Gear ratio helps in power transmission.
Here we have used external spur gears.
#### _Motto of usage:_  
 Spur gear mainly offers constant velocity ratio, don’t slip. These help in transmitting large power. We have used two spur gears. 
#### _Mechanism:_
 Worm wheel is connected to a spur gear of 2pi/3 teeth through a shaft. Gear ratio of two spur gears used is “three”, Small one with full teeth and one gear with large one third of teeth. When these two gears are meshed with each other, the spring gets compressed and when the part of large gear without teeth gets in contact with small gear the bot will jump and when the teeth of large gear again comes in contact with small gear, by that time the bot will be on ground. And this process continues.

![Image](https://github.com/pabbathisowmya/HopBot/blob/master/Images/Spring.jpg)
 
### SPRING:
#### _Motto of usage:_  
 To provide the required thrust.
#### _Mechanism:_
 The small spur gear is connected through a shaft with a string and the string rolls over the pulley. When the small gear along with the shaft rotates, the shaft tends to pull the string and the string rotates over the pulley inward and the string connected to the system of springs get compressed due to their arrangement in that way and the bot jumps and the process continues.

### WHEEL:
#### _Motto of usage:_
 Light weight wheels of bigger dimension relative to the chassis are used so that the overall weight of the bot is low and because of the large dimension of the wheels the chassis becomes perpendicular to the ground when the gears begin to unroll to ensure that the impact due to jump is maximum in vertical direction and hence it will move to a greater height
 
![Image](https://github.com/pabbathisowmya/HopBot/blob/master/Images/Wheel.jpg)

### SHAFT:
#### _Design:_
 Shaft, usually in circular dimension in which its radius and length can be changed.
#### _Motto of usage:_
 It is a rotating machine unit. This was used to transmit power from one part to another, or from a machine which produces power to a machine which absorbs power. The various members such as pulleys and gears are mounted on it.

## ELECTRICAL ASPECTS:

### BATTERY :
#### _Working:_
 When the anode and cathode of a battery is connected to form a circuit, a chemical reaction takes place between the anode and the electrolyte. This reaction causes electrons to flow through the circuit and back into the cathode where another chemical reaction takes place. 
#### _Motto of usage:_ 
 Battery is used for electrical energy generation and this electrical energy is consumed by the motor for the rotation of its shaft

### ARDUINO: 
#### _Intro:_ 
 Arduino is an open-source electronic platform that relates hardware and software.
#### _Working:_
 Arduino boards are able to read inputs - light on a sensor, a finger on a button - and turn it into an output - activating a motor, turning on an LED.
#### _Motto of usage:_
 To determine and monitor the speed of a motor and sensors, this arduino was used. And this helps in giving energy to the motor and battery is connected arduino.
#### _Position:_
 This arduino was placed outside of the board to reduce the weight of the bot and it was connected with wires to the motor. Here arduino uno was used since our bot doesn’t require high amount of power and lot of pins and memory space.

![Image](https://github.com/pabbathisowmya/HopBot/blob/master/Images/Arduino%20uno.jpg)

### ACCELEROMETER:
#### _Motto of usage:_
 It is electromechanical device and was used to sense the vibration, orientation and acceleration of a bot.

### GYROSCOPE:
#### _Motto of usage:_
 Gyroscope was used to determine angular velocity orientation of bot.

### WORKFLOW:

![Image](https://github.com/pabbathisowmya/HopBot/blob/master/Images/Work%20Flow.PNG)

### APPLICATIONS:
 Hop bot has a strong ability to overcome obstacles. It can be applied to the occasion with complex and changeable environment, such as detection of plane surface, post disaster relief and military reconnaissance.

### FUTURE IMPROVEMENTS:
 1. Changes can be made to move it in a desirable direction.
 2. Jump height can be increased by using a strong motor. 
 3. Time interval between two simultaneous jumps can be decreased.

### TEAM MEMBERS:
 1.	[Anshul saini](https://github.com/Anshulsaini24)
 2.	[pabbathisowmya](https://github.com/pabbathisowmya)
 3. [Dushyant Yadav](https://github.com/Dushyant540yadav)
 4.	[Vishal Yadav](https://github.com/Vishal2832)
 5.	[R. pranav](https://github.com/Pranavravichandran)
 6.	[Jahnavi Tarale](https://github.com/janhavi729)

### MENTOR:
 1.	[Dhruv seghal](https://github.com/Dhruv1064)
 2. [Suja](https://github.com/suja-g)
 3. [Virendra Yadav](https://github.com/virenyadav01)

### REFERENCE:
 1. [https://www.hindawi.com/journals/abb/2017/4780160/]
 2. [https://journals.sagepub.com/doi/full/10.5772/64200]
 3. [https://www.google.com/amp/s/spectrum.ieee.org/automaton/robotics/robotics-hardware/salto1p-is-the-most-amazing-jumping-robot-weve-ever-seen.amp.html]
 
