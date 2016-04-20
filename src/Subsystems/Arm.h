#ifndef ARM_SUBSYSTEM_H
#define ARM_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Arm : public Subsystem
{
private:
	VictorSP* armMotor;

public:
	Arm();

	// Set default command to ControlArmWithJoystick
	void InitDefaultCommand();

	// Set the speed of the arm
	void SetArmSpeed(float speed);
};

#endif
