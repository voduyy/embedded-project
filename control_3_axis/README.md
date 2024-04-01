# Control robot 3 axis with STM32
In this project, we using STM32F103C8T6 for project, this project is mainly focus on moving robot with stepper by generating pulse PWM through pins of STM32 when recieve value of UART completely. <br />
      <pre>
      -  With version 1 the main purpose is for testing, if robot's running, UART won't read value and tramsmit to the monitor a string "Running... Don't receive value".  <br />
      -  With version 2, we can receive multiple data from UART and if we receive XYZ from UART, robot immediately changes mode to  run with saved instruction. <br />
      </pre>
## Requirement project ##
You need anything software that can read data from COM of your computer (Hercules,PuTTY...).  <br />
This project is in `Version 1.14.0`, if you have version below this version, please update. <br />
# Detail project
The data you have to send is: 
   - For XYZ: <br />
            -   `X=XXXXXX,Y=XXXXXX,Z=XXXXXX` (first byte of each dim is direction if you send "-" Robot will change direction to CCW, vice versa).
   - For command:
        -   There are some strings for send command to robot <br />
          1. `Home----------------------`  <br />
          2. `Turn Around---------------`  <br />
          3. `Stop----------------------`  <br />
          4. `Stop conveyor-------------`  <br />
          5. `Start conveyor------------`  <br />
          6. `Start pick up-------------`  <br />
          7. `Stop pick up--------------`  <br />
     -   As you can see, there're command for Robot to return home(stop by end_stop[SIGX,SIGY,SIGZ]), or turn around (for 4 axis, and the axis 4th only run 3200 step [which you can modify for each situation]), Stop, On/off conveyor.
<br />

# Pin configuration
|Label  |Pin | Description |
| :--- | :--- | :---|
| `DIR(X,Y,Z)` | PB0, PA5, PB10 |Connect with **Direction (DIR+/-)** in the driver|
| `TIM2_CH1` | PA0 |Connect to X axis in **PUL** pins in the driver|
| `TIM3_CH1` | PB4 |Connect to Y axis in **PUL** pins in the driver|
| `TIM2_CH3` | PA2 |Connect to Z axis in **PUL** pins in the driver|
| `SIG(X,Y,Z)` | PB6, PB1, PB9 |Connect to **END_STOP** at each axis|
| `USART1_RX` | PA10 |Connect to **TX** of module UART|
| `USART1_RX` | PA9 |Connect to **RX** of module UART|
| `RELAY_CONVEYOR(optional)` | PB14 |Connect to a **Relay** that connect to the Conveyor of system|
| `RELAY_ROBOT(optional)`  | PA6 |Connect to a **Relay** that connect for pick up object|
| `TIM2_CH2` | PA1 |Connect to 4th axis in **PUL** pins in the driver for suitable project|
|`RELAY_ABSORB`| PB13|Connect to a **Relay** that connect for absord|

# Where to find code
You want to find a main.c -> go to Core/Src/main.c, open project is clicked .project to open the whole project, .ioc is a file config pin or peripheral.  <br />
