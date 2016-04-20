#ifndef CONTROL_ARM_WITH_JOYSTICK_H_
#define CONTROL_ARM_WITH_JOYSTICK_H_

#include "../CommandBase.h"
#include "WPILib.h"

class ControlArmWithJoystick : public CommandBase
{

private:
	static const float ARM_SPEED;

public:
	ControlArmWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

};

#endif
