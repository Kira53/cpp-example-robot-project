#include <SetFlywheels.h>

// Speed constants for flywheels
const float SetFlywheels::SHOOT_SPEED = 0.5;
const float SetFlywheels::PULL_SPEED = 0.0;
const float SetFlywheels::RESET_SPEED = -0.2;

SetFlywheels::SetFlywheels(float speed) :
	speed(speed)
{
	Requires(shooter.get());
}

void SetFlywheels::Initialize()
{
	SetTimeout(1);
}

void SetFlywheels::Execute()
{
	shooter->SetFlywheelSpeed(speed);
}

bool SetFlywheels::IsFinished()
{
	return IsTimedOut();
}

void SetFlywheels::End()
{
}

void SetFlywheels::Interrupted()
{
	End();
}
