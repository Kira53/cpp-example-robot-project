#include "Shooter.h"
#include "../RobotMap.h"

Shooter::Shooter() :
		Subsystem("Shooter")
{
	rightFlywheel = new VictorSP (RIGHT_FLYWHEEL_PWM);
	leftFlywheel = new VictorSP (LEFT_FLYWHEEL_PWM);

	// Disables safety so VictorSP's will remain at set speed
	rightFlywheel->SetSafetyEnabled(false);
	leftFlywheel->SetSafetyEnabled(false);

	// Set inverted motor
	rightFlywheel->SetInverted(true);
	leftFlywheel->SetInverted(false);

	// Reset called to return elements to known state
	Reset();
}

float Shooter::GetFlywheelSpeed()
{
	return rightFlywheel->Get();
}

void Shooter::SetFlywheelSpeed(float speed)
{
	rightFlywheel->Set(speed);
	leftFlywheel->Set(speed);
}

void Shooter::Reset()
{
	SetFlywheelSpeed(0);
}
