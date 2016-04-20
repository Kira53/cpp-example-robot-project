#ifndef SHOOTER_SUBSYSTEM_H
#define SHOOTER_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem
{

private:
	VictorSP* rightFlywheel;
	VictorSP* leftFlywheel;

public:
	Shooter();

	// Gets and sets the speed of the flywheels, respectively
	float GetFlywheelSpeed();
	void SetFlywheelSpeed(float speed);

	// Resets shooter subsystem
	void Reset();

};

#endif
