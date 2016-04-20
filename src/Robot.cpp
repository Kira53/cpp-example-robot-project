#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/CrossLowBar.h"
#include "Commands/DriveStraight.h"

class Robot: public IterativeRobot
{
private:
	std::unique_ptr<Command> autonomousCommand;
	SendableChooser *chooser;
	DigitalInput *automode;
	DigitalInput *limitSwitch;


	void RobotInit()
	{
		CommandBase::init();
		chooser = new SendableChooser();
		SmartDashboard::PutData("Auto Modes", chooser);
		limitSwitch = new DigitalInput(AUTO_MODE_DIGITAL_INPUT);
	}

	/**
     * This function is called once each time the robot enters Disabled mode.
     * You can use it to reset any subsystem information you want to clear when
	 * the robot is disabled.
     */
	void DisabledInit()
	{
		CommandBase::disable();
	}

	void DisabledPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	/**
	 * This autonomous (along with the chooser code above) shows how to select between different autonomous modes
	 * using the dashboard. The sendable chooser code works with the Java SmartDashboard. If you prefer the LabVIEW
	 * Dashboard, remove all of the chooser code and uncomment the GetString code to get the auto name from the text box
	 * below the Gyro
	 *
	 * You can add additional auto modes by adding additional commands to the chooser code above (like the commented example)
	 * or additional comparisons to the if-else structure below with additional strings & commands.
	 */
	void AutonomousInit()
	{
		if (!limitSwitch->Get())	{
			// To cross the low bar (limit switch is at the non-green side)
			autonomousCommand.reset((Command*) new CrossLowBar());
		} else {
			// To cross the moat (limit switch is at the green side)
			autonomousCommand.reset((Command*) new DriveStraight(1, 1));
		}

		if (autonomousCommand != NULL)
			autonomousCommand->Start();
	}

	void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TeleopInit()
	{
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to
		// continue until interrupted by another command, remove
		// this line or comment it out.
		if (autonomousCommand != NULL)
			autonomousCommand->Cancel();
	}

	void TeleopPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TestPeriodic()
	{
		LiveWindow::GetInstance()->Run();
	}
};

START_ROBOT_CLASS(Robot)

