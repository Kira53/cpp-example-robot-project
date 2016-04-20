#ifndef DRIVETRAIN_SUBSYSTEM_H
#define DRIVETRAIN_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Drivetrain: public Subsystem
{

private:
	RobotDrive* drive;
	AnalogGyro* gyro;

public:
	Drivetrain();

	// Subsystem's default command
	void InitDefaultCommand();

	// Arcade drive (single joystick driving)
	void ArcadeDrive(float speed, float turn);

	// Return robot heading
	float GetHeading();

	// Resets subsystem to a known state
	void Reset();
};

#endif
