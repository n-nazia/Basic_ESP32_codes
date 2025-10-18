#  ESP32 Basic Example Codes  

This folder contains simple **ESP32 programs** to help beginners get started with basic operations like **blinking an LED**, **printing messages**, **reading sensors**, and **connecting to Wi-Fi**.  

---

##  Requirements  
-  **ESP32 Development Board**  
-  **Arduino IDE** (with ESP32 board package installed)  
-  **USB cable** for uploading code  

---

##  Included Codes  

###  1. LED Blink  
-  Turns an LED **ON and OFF** every second.  
-  Uses **GPIO2** or the onboard LED.  

###  2. Serial Print  
-  Prints messages on the **Serial Monitor** for testing communication.  

###  3. Button Input  
-  Reads the state of a **button** and turns ON an **LED** when pressed.  

###  4. Analog Sensor Read  
-  Reads **analog values** from a sensor (like **LDR** or **potentiometer**) on **pin 34**.  

###  5. Wi-Fi Connection  
-  Connects the ESP32 to a **Wi-Fi network** and prints the **IP address**.  

---

##  How to Upload  

1.  Open any `.ino` file in **Arduino IDE**.  
2.  Select your **Board** → “ESP32 Dev Module”.  
3.  Select the correct **Port**.  
4.  Click **Upload (→)**.  
5.  Open **Serial Monitor** (`115200 baud`) to view output.  

---

##  Expected Output  

-  LED blinks or responds to button press.  
-  Sensor values or messages appear in the Serial Monitor.  
-  Wi-Fi example shows the ESP32’s **IP address** once connected.  
