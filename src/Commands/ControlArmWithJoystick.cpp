#include <Commands/ControlArmWithJoystick.h>
#include "math.h"

const float ControlArmWithJoystick::ARM_SPEED = 0.75;

ControlArmWithJoystick::ControlArmWithJoystick()
{
	Requires(arm.get());
}

void ControlArmWithJoystick::Initialize()
{
}

void ControlArmWithJoystick::Execute()
{
	Joystick* joy = oi->GetDriveStick();
	// Axis input is to the power of three to get a cubic function curve of acceleration
	if (joy->GetRawButton(OI::RIGHT_BUMPER_BUTTON))
	{
		float output = -std::pow(joy->GetRawAxis(OI::RIGHT_Y_AXIS), 3);
		arm->SetArmSpeed(output);
	}
	else
	{
		arm->SetArmSpeed(0);
	}
}

bool ControlArmWithJoystick::IsFinished()
{
	// Run this command continually
	return false;
}

void ControlArmWithJoystick::End()
{
}

void ControlArmWithJoystick::Interrupted()
{
	End();
}
