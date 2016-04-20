#include <Commands/ControlArmWithJoystick.h>
#include "Arm.h"
#include "../RobotMap.h"


Arm::Arm()
{
	armMotor = new VictorSP(ARM_MOTOR_PWM);
}

void Arm::InitDefaultCommand()
{
	SetDefaultCommand(new ControlArmWithJoystick());
}

void Arm::SetArmSpeed(float speed)
{
	armMotor->Set(speed);
}

