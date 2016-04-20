#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick* joy;

public:
	OI();

	static const int LEFT_Y_AXIS = 1;
	static const int LEFT_X_AXIS = 0;
	static const int RIGHT_X_AXIS = 4;
	static const int RIGHT_Y_AXIS = 5;
	static const int LEFT_TRIGGER_AXIS = 2;
	static const int RIGHT_TRIGGER_AXIS = 3;

	static const int LEFT_BUMPER_BUTTON = 5;
	static const int RIGHT_BUMPER_BUTTON = 6;
	static const int X_BUTTON = 3;
	static const int A_BUTTON = 1;
	static const int B_BUTTON = 2;
	static const int Y_BUTTON = 4;
	static const int SELECT_BUTTON = 7;
	static const int START_BUTTON = 8;
	static const int LEFT_STICK_BUTTON = 9;
	static const int RIGHT_STICK_BUTTON = 10;

	Joystick* GetDriveStick();

};

#endif
