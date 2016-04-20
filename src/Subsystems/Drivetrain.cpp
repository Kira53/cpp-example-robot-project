#include "Drivetrain.h"
#include "../RobotMap.h"
#include "Commands/DriveWithJoystick.h"

Drivetrain::Drivetrain() :
			Subsystem("Drivetrain")
{
	drive = new RobotDrive(FRONT_LEFT_MOTOR_PWM, REAR_LEFT_MOTOR_PWM, FRONT_RIGHT_MOTOR_PWM, REAR_RIGHT_MOTOR_PWM);
	gyro = new AnalogGyro(ANALOG_GYRO);
	gyro->SetSensitivity(0.00666);
	gyro->Calibrate();
}

void Drivetrain::InitDefaultCommand()
{
	SetDefaultCommand(new DriveWithJoystick());
}

void Drivetrain::ArcadeDrive(float speed, float turn)
{
	drive->ArcadeDrive(speed, turn);
}

float GetHeading()
{
	return gyro->GetAngle();
}

void Drivetrain::Reset()
{
	ArcadeDrive(0, 0);
}
