#include "CommandBase.h"
#include "Commands/Scheduler.h"

// Initialize a single static instance of all of your subsystems to NULL
std::unique_ptr<Shooter> CommandBase::shooter;
std::unique_ptr<OI> CommandBase::oi;
std::unique_ptr<Drivetrain> CommandBase::drivetrain;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{

}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	drivetrain.reset(new Drivetrain());
	oi.reset(new OI());
	shooter.reset(new Shooter());
}

void CommandBase::disable()
{
	drivetrain->Reset();
	shooter->Reset();
}
