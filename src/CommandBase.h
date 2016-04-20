#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "WPILib.h"

#include "Subsystems/Arm.h"
#include "Subsystems/Drivetrain.h"
#include "OI.h"
#include "Subsystems/Shooter.h"

#include <string>

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command
{
public:
	CommandBase(const std::string &name);
	CommandBase();

	static void init();
	static void disable();

	static std::unique_ptr<Arm> arm;
	static std::unique_ptr<Drivetrain> drivetrain;
	static std::unique_ptr<OI> oi;
	static std::unique_ptr<Shooter> shooter;
};

#endif
