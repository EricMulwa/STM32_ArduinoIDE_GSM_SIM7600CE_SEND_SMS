/*
This Program Utilizes SIM7600CE GSM Module to send the message "Electric Vehicle No.X is Fully Charged and Disconnected from power!".
This SMS is send to the Parking Lot  Attendant in order to notify the EV Owner that the vehicle is ready for pick up. 
This code will be executed when the a signal from the IR Transmitter connected to the BMS is detected by the Receiver connected to the STM32F103C8T6.
This signal will only be emitted by the BMS when the EV is fuly charged. 
Once the signal is received, a program to switch off the Relay Module will be executed first to cut of power supply from the transceiver coils.
The second step will be switching on the DC motor and Moving the System Down (Counter-clockwise) to await the second vehicle to charge.

  modified 14 SEP 2023
  by Eric Mulwa Eng BSc
*/

#include <Arduino.h>
#include <string.h>

bool sentMessage = false; // Flag to control SMS sending

void setup() {
  Serial.begin(115200);  // Initialize the Arduino serial port
  Serial1.begin(115200); // Initialize the Serial1 port (USART1) for the SIM7600 module
  delay(1000);  // Give the module some time to initialize
}

void loop() {
  if (!sentMessage) {
    char mobileNumber[] = "+254796456877";  // Enter the Mobile Number you want to send to
    char ATcommand[80];
    uint8_t buffer[30] = {0};
    uint8_t ATisOK = 0;

    while (!ATisOK) {
      sprintf(ATcommand, "AT\r\n");
      Serial1.print(ATcommand);
      delay(1000);
      if (Serial1.find("OK")) {
        ATisOK = 1;
      }
      delay(1000);
    }

    sprintf(ATcommand, "AT+CMGF=1\r\n");
    Serial1.print(ATcommand);
    delay(100);
    Serial1.readBytes(buffer, sizeof(buffer));
    delay(1000);
    memset(buffer, 0, sizeof(buffer));

    sprintf(ATcommand, "AT+CMGS=\"%s\"\r\n", mobileNumber);
    Serial1.print(ATcommand);
    delay(100);
    sprintf(ATcommand, "The Ev No.X has been Disconnected from Power!%c", 0x1a);
    Serial1.print(ATcommand);
    delay(4000);

    sentMessage = true; // Set the flag to true to indicate that the message has been sent
  }
}
