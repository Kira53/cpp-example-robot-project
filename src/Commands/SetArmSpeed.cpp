#include <SetArmSpeed.h>

SetArmSpeed::SetArmSpeed(float speed, float duration) :
	speed(speed),
	duration(duration)
{
	Requires(arm.get());
}

void SetArmSpeed::Initialize()
{
	SetTimeout(duration);
}

void SetArmSpeed::Execute()
{
	arm->SetArmSpeed(speed);
}

bool SetArmSpeed::IsFinished()
{
	return IsTimedOut();
}

void SetArmSpeed::End()
{
	arm->SetArmSpeed(0);
}

void SetArmSpeed::Interrupted()
{
	End();
}

