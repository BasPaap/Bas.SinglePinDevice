/*
  Bas.SinglePinDevice

  This example code is in the public domain.
*/

#include<Bas.SinglePinDevice.h>

const int firstDevicePin = 2;  // the number of the pin the first device is on.
const int secondDevicePin = 3;  // the number of the pin the second device is on.

Bas::SinglePinDevice firstDevice{ firstDevicePin };   // Instantiate the first SinglePinDevice object with the correct pin.
Bas::SinglePinDevice secondDevice{ secondDevicePin };   // Instantiate the second SinglePinDevice object with the correct pin.

void setup() {
    //Initialize serial and wait for port to open:
    Serial.begin(9600);
    while (!Serial);  // wait for serial port to connect. Needed for native USB port only

    firstDevice.begin(); // By default, the device is OFF at startup.
    secondDevice.begin(true); // By passing true, the device will be ON at startup.
}

void loop() {
    // The devices will start out in their default state: the first device will be off, while the second device will be on.
    // After a second, the first device will turn on while the second will turn off. After another second, the first device will
    // turn off again, while the second device will turn back on. This will then happen indefinitely.
    
    delay(1000)
    
    Serial.print("Turning the first device on.");
    firstDevice.turnOn();

    Serial.print("Turning the second device off.");
    secondDevice.turnOff();

    delay(1000);

    Serial.print("Turning the first device off.");
    firstDevice.turnOff();

    Serial.print("Turning the second device on.");
    secondDevice.turnOn();    
}