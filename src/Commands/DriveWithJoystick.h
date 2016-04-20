#ifndef DriveWithJoystick_H
#define DriveWithJoystick_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveWithJoystick: public CommandBase
{

public:

	static const float BASE_SPEED;
	static const float TURN_SPEED;

	// This allows the robot to be driven using a single joystick
	DriveWithJoystick();

	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

};

#endif
