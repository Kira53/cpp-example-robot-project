#include <Commands/DriveStraight.h>
#include "../CommandBase.h"

DriveStraight::DriveStraight(float speed, float duration) :
	heading(0),
	speed(-speed),
	duration(duration)
{
	Requires(drivetrain.get());

	speed = -0.65;
	duration = 2.5;
}

void DriveStraight::Initialize() {
	drivetrain->Reset();
	SetTimeout(duration);
	heading = drivetrain->GetHeading();
}

void DriveStraight::Execute() {
	float currentHeading = drivetrain->GetHeading();

	drivetrain->ArcadeDrive(speed, (heading - currentHeading) * 0.8);
}

bool DriveStraight::IsFinished() {
	return IsTimedOut();
}

void DriveStraight::End() {

}

void DriveStraight::Interrupted() {
	End();
}
