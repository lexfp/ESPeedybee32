# ESPeedybee32
Speedybee bluetooth adapter using an ESP32

# Description
This is currently a work in progress. I have gotten it to connect to Betaflight over a bluetooth connection on my mac and then selecting the bluetooth connection under the dropdown in betaflight and connect to the flight controller. 
However, I have not gotten the speedybee application to see this bluetooth connection on any of my phones. I don't have the original speedybee modules, so I am guessing there is something about the bluetooth connection that is different.

# Wiring
1) The wiring is very similar to the speedybee module. Basically, a free UART on the flight controller tx goes to the ESP32's RX (gpio16) and the flight controller rx goes to the ESP32's TX (gpio17). You may also need a separate ground pin for the tx/rx communication depending on the power source of your esp32. The ESP32 will also need VIN/GND connected to a separate power source or to your 5v/gnd on the flight controller. 
2) In the flight controller, go to the ports tab and set the UART you chose to "Configuration/MSP" and change the baud rate the 9600.
3) On your laptop, go to the bluetooth connections and connect to the ESPeedybee32. Then start up betaflight and choose the bluetooth connection you just established in the dropdown and select the baud rate to 9600. 

# TODO
1) Need to get this working with Speedybee
2) Need to get this working through the FC's USB connection instead of a separate uart.
