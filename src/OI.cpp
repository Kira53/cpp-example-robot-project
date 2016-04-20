#include "OI.h"

OI::OI()
{
	joy = new Joystick(0);
	Joystick* OI::GetDriveStick()
	{
		return joy;
	}
}
