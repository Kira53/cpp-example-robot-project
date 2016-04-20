#include <Commands/Reset.h>
#include <Commands/DriveStraight.h>
#include <Commands/SetArmSpeed.h>
#include <Commands/SetFlywheels.h>

Reset::Reset() {
	// Resets subsystem components to known state (0)
	AddParallel(new DriveStraight(0, 0));
	AddParallel(new SetArmSpeed(0, 0));
	AddParallel(new SetFlywheels(0));
}

