#include "DriveWithJoystick.h"
#include "../OI.h"

// Speed constants for drivetrain
const float DriveWithJoystick::BASE_SPEED = 0.65;
const float DriveWithJoystick::TURN_SPEED = 0.80;

DriveWithJoystick::DriveWithJoystick()
{
	Requires(drivetrain.get());
}

// Called just before this Command runs the first time
void DriveWithJoystick::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoystick::Execute()
{
	// Pulling the triggers boosts the speed from the base speed up to one
	// depending on the axis position

	Joystick* joy = CommandBase::oi->GetDriveStick();

	float boost = (1 - BASE_SPEED) * joy->GetRawAxis(OI::LEFT_TRIGGER_AXIS) + BASE_SPEED;
	float turnBoost = (1 - TURN_SPEED) * joy->GetRawAxis(OI::RIGHT_TRIGGER_AXIS) + TURN_SPEED;
	float speed = joy->GetRawAxis(OI::LEFT_Y_AXIS) * boost;
	float turn = joy->GetRawAxis(OI::RIGHT_X_AXIS) * turnBoost;

	drivetrain->ArcadeDrive(speed, turn);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoystick::IsFinished()
{
	// Run continually
	return false;
}

// Called once after isFinished returns true
void DriveWithJoystick::End()
{
	drivetrain->Reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoystick::Interrupted()
{
	End();
}
