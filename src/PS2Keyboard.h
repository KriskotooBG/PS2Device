/**
 * PS2Keyboard.h
 * Header file for PS2Keyboard.cpp
 * Author: Kris G.
 * 
*/


#ifndef ps2keyboard_h
#define ps2keyboard_h

#include "Arduino.h"


class PS2Keyboard{
	
	public:
		PS2Keyboard(int dataPin, int clockPin);

		bool init();
		bool writeByte(unsigned char byte);
		bool writeByte(unsigned char * byte);



	private:
		bool _kbLed_numlock;
		bool _kbLed_capsLock;
		bool _kbLed_scrollLock;
};

#endif