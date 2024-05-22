/*
  Bas.SinglePinDevice.h - Library for a simple device that can be turned on or off by writing to a single pin.
  Created by Bas Paap, May 2024.
  Released into the public domain.
*/

#ifndef _SINGLEPINDEVICE_h
#define _SINGLEPINDEVICE_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
namespace Bas
{
	/// <summary>
	/// Encapsulate a device controlled by a single pin.
	/// </summary>
	class SinglePinDevice
	{
		int pin;

	public:
		/// <summary>
		/// Constructs the SinglePinDevice object.
		/// </summary>
		/// <param name="pin">The pin the device is connected to.</param>
		SinglePinDevice(int pin);

		/// <summary>
		/// Initialize the device by setting the initial state of the pin.
		/// </summary>
		/// <param name="startsInOnState">A boolean that specifies wether or not the device should start in the "on" state.</param>
		void begin(bool startsInOnState = false);

		/// <summary>
		/// Gets the pin used by the device.
		/// </summary>
		/// <returns>The pin used by the device.</returns>
		int getPin();

		/// <summary>
		/// Turns the device on.
		/// </summary>
		void turnOn();

		/// <summary>
		/// Turns the device off.
		/// </summary>
		void turnOff();		
	};
}

#endif

