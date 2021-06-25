# Circuit Design with 5 Servos and potentiometers

this circuit design with 5 Servos and potentiometer for each servo to control each parts of the robot arm in *arduino_robot_arm package*. This project has done using Tinkercad


Tinkercad link:  https://www.tinkercad.com/things/jXFtvNzUW58



## Servo Distribution


Note: in this design, a micro servo is used. but for the robot arm project, a different servo will be used.


| Part  | Servo Type |
|-------|------------|
| Base  |   MG 995   |
| Shoulder  |   MG 995   |
| Elbow  |   MG 995   |
| Wrist  |   MG 995   |
| Gripper  |   Micro   |



## Circuit Design

when the power is off:


![off](https://github.com/AlolyanRoaa/CircuitDesign-5Servos-potentiometers/blob/main/off%20with%20potentiometer.PNG)


## Testing 


when switching the power ON, and controlling each servo using the potentiometer in range between 1 to 180 degree.


![ON with Different Angles](https://github.com/AlolyanRoaa/CircuitDesign-5Servos-potentiometers/blob/main/ONwDiffAngels.PNG)


## Assembly


After connecting the arduino's (Arduino Uno R3) ground to breadboard (-), and 5v to breadboard (+).


then for each servo : brow wire to ground, red to power, and orange for signal to the arduino.


| Part  | Digital pwm |
|-------|------------|
| Base  |   D11   |
| Shoulder  |   D5   |
| Elbow  |   D6   |
| Wrist  |   D10   |
| Gripper  |   D9   |



now for potentiometers : black wire to ground, red to power, and green for signal to the arduino analog input.


| Part  | Digital pwm | analog input |
|-------|-------------|--------------|
| Base  |     D11     |     A1     |
| Shoulder  |   D5   |     A2     |
| Elbow  |   D6   |    A3     |
| Wrist  |   D10   |    A4     |
| Gripper  |   D9   |    A5     |









