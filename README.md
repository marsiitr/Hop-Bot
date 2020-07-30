# HopBot
-Srishti 2020
##  ABSTRACT:
<p align="justify">
 Hop bot is used to jump over any obstacle of height of comparable dimension to that of the bot. Motor, Springs and Gears are used for its proper functioning along with a pair of Non-motorized wheels.
</p>

![Image](https://github.com/pabbathisowmya/HopBot/blob/master/Images/Mechanical%20cad.jpg)

## MOTIVATION:
 <p align="justify">
 A jumping robot can cross the obstacle several times its own height.Military and disaster management teams sometimes come across situations where they need a robot which can be operated in any terrain. There we need hop bot which occupies less space, could skip obstacles by jumping mechanism.
</p>
<p align="justify">
 While designing we took hint from the hoping of locust and grasshopper. In nature, a locust will first orient its body to the desired direction with its forelegs and then propel its jumps via rapid movement of its hind legs, thereby converting stored energy to the acceleration of its body. 
</p>
<p align="justify">
 Here we used the springs for replacing the muscle power. The spring has the advantages of strong energy storage, fast energy release, simple structure, and simple control.
</p>

## WORKFLOW:

![Image](https://github.com/pabbathisowmya/HopBot/blob/master/Images/Work%20Flow.PNG)
## MECHANICAL ASPECTS: 

###  DC MOTOR:
#### _Design:_ 
 <p align="justify">
 	DC motors take electrical power through direct current, and convert this energy into mechanical rotation. DC motors use magnetic fields that occur from the electrical currents generated, which powers the movement of a rotor fixed within the output shaft. The output torque and speed depends upon both the electrical input and the design of the motor.
 </p>

#### _Motto of usage:_
<p align="justify">
 Speed control and output range.  DC motors offer better speed variation and control and produce more torque than AC motors.
</p>

###  WORM DRIVE:
####  _Design:_
<p align="justify">
 Worm has two parts in which a worm gear meshes with a worm wheel. These together help in power transmission.The worm wheel is similar to spur gear.
</p>

#### _Power transmission_:
<p align="justify"> 
 Left hand and right hand worm: a right hand worm gear moves in clockwise direction regarding observer and a left hand worm gear moves in anticlockwise direction regarding observer.
</p>

#### _Motto of usage:_
<p align="justify"> 
 Worm drive was used to reduce rotational speed and   transmit higher torque. They transfer motion in 90 degrees.
</p>

#### _Mechanism:_
<p align="justify"> 
 The shaft of a DC Motor is connected to worm gear and worm gear is connected to worm wheel. When the shaft of motor rotates, the worm gear starts rotating and due to meshing worm wheel also rotates and transmission takes place. And this worm wheel is connected to a spur gear of 2pi/3 teeth through a shaft.
</p>

<center>
<img src= "https://github.com/pabbathisowmya/HopBot/blob/master/Images/Gears%20Arangement.jpg">
</center>
 
### SPUR GEAR:
#### _Design:_
<p align="justify"> 
 Spur gear contains a cylindrical visualization with teeth radiating. Spur gear comes with different dimensions in which their radius, pressure angle and inclination of teeth with respect to axis of rotation, diametral pitch can be changed.  Gear ratio helps in power transmission.
Here we have used external spur gears.
</p>

#### _Motto of usage:_  
<p align="justify"> 
 Spur gear mainly offers constant velocity ratio, don’t slip. These help in transmitting large power. We have used two spur gears. 
</p>

#### _Mechanism:_
<p align="justify"> 
 Worm wheel is connected to a spur gear of 2pi/3 teeth through a shaft. Gear ratio of two spur gears used is “three”, Small one with full teeth and one gear with large one third of teeth. When these two gears are meshed with each other, the spring gets compressed and when the part of large gear without teeth gets in contact with small gear the bot will jump and when the teeth of large gear again comes in contact with small gear, by that time the bot will be on ground. And this process continues.
</p>

![Image](https://github.com/pabbathisowmya/HopBot/blob/master/Images/Spring.jpg)
 
### SPRING:
#### _Motto of usage:_
<p align="justify">   
 To provide the required thrust.
</p>

#### _Mechanism:_
<p align="justify"> 
 The small spur gear is connected through a shaft with a string and the string rolls over the pulley. When the small gear along with the shaft rotates, the shaft tends to pull the string and the string rotates over the pulley inward and the string connected to the system of springs get compressed due to their arrangement in that way and the bot jumps and the process continues.
</p>

### WHEEL:
#### _Motto of usage:_
<p align="justify"> 
 Light weight wheels of bigger dimension relative to the chassis are used so that the overall weight of the bot is low and because of the large dimension of the wheels the chassis becomes perpendicular to the ground when the gears begin to unroll to ensure that the impact due to jump is maximum in vertical direction and hence it will move to a greater height
 </p>

![Image](https://github.com/pabbathisowmya/HopBot/blob/master/Images/Wheel.jpg)

### SHAFT:
#### _Design:_
<p align="justify"> 
 Shaft, usually in circular dimension in which its radius and length can be changed.
</p>

#### _Motto of usage:_
<p align="justify"> 
 It is a rotating machine unit. This was used to transmit power from one part to another, or from a machine which produces power to a machine which absorbs power. The various members such as pulleys and gears are mounted on it.
</p>

## ELECTRICAL ASPECTS:

### BATTERY :
#### _Working:_
<p align="justify"> 
 When the anode and cathode of a battery is connected to form a circuit, a chemical reaction takes place between the anode and the electrolyte. This reaction causes electrons to flow through the circuit and back into the cathode where another chemical reaction takes place. 
</p>

#### _Motto of usage:_ 
<p align="justify"> 
 Battery is used for electrical energy generation and this electrical energy is consumed by the motor for the rotation of its shaft
</p>

### ARDUINO: 
#### _Intro:_ 
<p align="justify"> 
 Arduino is an open-source electronic platform that relates hardware and software.
</p>

#### _Working:_
<p align="justify"> 
 Arduino boards are able to read inputs - light on a sensor, a finger on a button - and turn it into an output - activating a motor, turning on an LED.
</p>

#### _Motto of usage:_
<p align="justify"> 
 To determine and monitor the speed of a motor and sensors, this arduino was used. And this helps in giving energy to the motor and battery is connected arduino.
</p>

#### _Position:_
<p align="justify"> 
 This arduino was placed outside of the board to reduce the weight of the bot and it was connected with wires to the motor. Here arduino uno was used since our bot doesn’t require high amount of power and lot of pins and memory space.
</p>

![Image](https://github.com/pabbathisowmya/HopBot/blob/master/Images/Arduino%20uno.jpg)

### ACCELEROMETER:
#### _Motto of usage:_
<p align="justify"> 
 It is electromechanical device and was used to sense the vibration, orientation and acceleration of a bot.
</p>

### GYROSCOPE:
#### _Motto of usage:_
<p align="justify"> 
 Gyroscope was used to determine angular velocity orientation of bot.
</p>

## COST STRUCTURE:
![Image](https://github.com/pabbathisowmya/Hop-Bot-1/blob/master/Images/Cost%20Structure.PNG)

## APPLICATIONS:
 1. Hop bot has a strong ability to overcome obstacles. 
 2. It can be applied to the occasion with complex situation such as detection of plane surface and military reconnaissance.
 3. It can be applied to the occasion with changeable environment such as post disaster relief.

## LIMITATIONS:
 1. Robot cannot move it can only jump
 2. Its forwarded movement cannot be controlled that comes from jump
 3. It cannot jump higher Up to a limit of 0.5m
 4. Direction of bot movement cannot be controlled

## FUTURE IMPROVEMENTS:
 1. Changes can be made to move it in a desirable direction.
 2. Jump height can be increased by using a strong motor. 
 3. Time interval between two simultaneous jumps can be decreased.

## TEAM MEMBERS:
 1.	[Anshul saini](https://github.com/Anshulsaini24)
 2.	[Dushyant Yadav](https://github.com/Dushyant540yadav)
 3. [Jahnavi Tarale](https://github.com/janhavi729)
 4.	[pabbathisowmya](https://github.com/pabbathisowmya)
 5.	[R.pranav](https://github.com/Pranavravichandran)
 6.	[Vishal Yadav](https://github.com/Vishal2832)

## MENTORS:
 1.	[Dhruv seghal](https://github.com/Dhruv1064)
 2. [Suja](https://github.com/suja-g)
 3. [Virendra Yadav](https://github.com/virenyadav01)

## REFERENCE:
 1. https://www.hindawi.com/journals/abb/2017/4780160/
 2. https://journals.sagepub.com/doi/full/10.5772/64200
 3. https://www.google.com/amp/s/spectrum.ieee.org/automaton/robotics/robotics-hardware/salto1p-is-the-most-amazing-jumping-robot-weve-ever-seen.amp.html
 
