# STM32_ArduinoIDE_GSM_SIM7600CE_SEND_SMS

This Arduino sketch demonstrates the integration of an STM32F103C8T6 microcontroller with a SIM7600CE GSM 4G Module to send an SMS message, "Hello, GSM is Ready!" to a specified phone number. The program is developed in the Arduino IDE and is designed for a one-time SMS message sending. However, you can modify it to send SMS messages at specific intervals by commenting out the flag control.
## Features
- Sends a one-time SMS message using the SIM7600CE GSM 4G Module.
- You can change the recipient's phone number in the code.
- Option to configure the program to send SMS messages at specified intervals.

## Hardware Requirements
- STM32F103C8T6 microcontroller.
- SIM7600CE GSM 4G Module.
- Appropriate power supply and connections for both components.

## Getting Started
1. Define the recipient's phone number in the code.
2. Upload the code to the STM32F103C8T6 microcontroller.
3. Insert a SIM card into the SIM7600CE module.
4. Power up the system and wait for the module to initialize.
5. The program will send the specified SMS message once.

Feel free to modify the code to suit your project requirements, such as sending SMS messages at regular intervals for monitoring and alerting purposes.

## Author
Eric Mulwa Eng BSc 



# Before Using the Program

Before you can use the program, you need to install the STM32Duino library. Follow these steps to set up the environment:

1. **Install the STM32Duino Library:**

   To use this program, you'll need to install the STM32Duino library. You can do this by adding a custom URL to your Arduino IDE's Boards Manager. Follow these steps:

   - Copy the following link:
     ```
     http://dan.drown.org/stm32duino/package_STM32duino_index.json
     ```
   - Open the Arduino IDE.
   - Go to `File > Preferences`.
   - In the "Additional Boards Manager URLs" field, paste the copied link.
   - Click "OK" to save the changes.

2. **Install STM32Duino Packages:**

   - Open the Arduino IDE.
   - Go to `Tools > Board > Boards Manager`.
   - In the Boards Manager, search for "STM32" and install the following packages:
     - "STM32F1xx"
     - STM32F4xx


3. **Select Your Board Variant:**
     - "STM32 72MHz CPU Speed"
     - "STM32 COM Port 3"
     - "STM32 ST-Link Upload Method"
  I used the STM32F103CB 128K Flash Variant, COM Port 3, 72MHz CPU Speed and ST-Link Upload Method.

Depending on your specific hardware configuration, you may need to select the appropriate board variant. For example, you can choose the "STM32F103CB 128K Flash Variant" as the target board.

Now, your environment is set up to use the program with the STM32Duino library and the necessary packages. You can upload the code to your STM32F103C8T6 microcontroller and start using the SMS sending functionality.

## Author
Eric Mulwa Eng BSc 

