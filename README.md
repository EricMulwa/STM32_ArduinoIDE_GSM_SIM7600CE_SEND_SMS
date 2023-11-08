# STM32_ArduinoIDE_GSM_SIM7600CE_SEND_SMS
This Program interfaces STM32F103C8T6 with GSM SIM7600CE 4G Module to send the message "Hello, GSM is Ready!".The program is developed in the Arduino IDE.
The program allows you to send an SMS from GSM SIM7600CE 4G Module to the phone number specified in the code (Change it to your desired number)
The code sends the SMS only once but you can comment out the flag and have it send at any interval you specify.

Before you can use the program, install the STM32Duino library from this link: (Just copy everything from "link http://dan... to the end". The whole of the following line.)
link http://dan.drown.org/stm32duino/package_STM32duino_index.json,https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json,https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa2R6WGtKRHVNb2wwd0tma2hlSDdpNzJsRUNTZ3xBQ3Jtc0ttckRZaVozX2haQUZJdzhBNl9HQ2dUNldkd1ZtazM5c1JKME52VC1QNnhQUHpGY0pBQUFhQTR5WW1HZjcxRFNOREc3aWtfdFdXMEZORm9DN3hJczVzY2tEbFRncEgteEIxbzJWMEZ2V0p1UlYxaU00SQ&q=http%3A%2F%2Fdan.drown.org%2Fstm32duino%2Fpackage_STM32duino_index.json&v=zUk0lN1oEwQ 
Just copy the link and go to your Arduino IDE, Preferences and then Additional boards manager URLs and paste it there. 
Then go to your Boards manager and search "STM32" and install the two MHz CPU Speed, COM Port 3 and ST-Link Upload Method.
I used the STM32F103CB 128K Flash Variant, COM Port 3, 72MHz CPU Speed and ST-Link Upload Method. 
