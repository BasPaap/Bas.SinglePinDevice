/*
  Bas.SinglePinDevice.h - Library for a simple device that can be turned on or off by writing to a single pin.
  Created by Bas Paap, May 2024.
  Released into the public domain.
*/

#include "Bas.SinglePinDevice.h"

namespace Bas
{
	SinglePinDevice::SinglePinDevice(int pin) : pin{ pin }
	{
	}

	void SinglePinDevice::begin(bool startsInOnState)
	{
		pinMode(this->pin, OUTPUT);
		digitalWrite(pin, startsInOnState ? HIGH : LOW);
	}

	int SinglePinDevice::getPin()
	{
		return this->pin;
	}

	void SinglePinDevice::turnOn()
	{
		digitalWrite(pin, HIGH);
	}

	void SinglePinDevice::turnOff()
	{
		digitalWrite(pin, LOW);
	}
}
