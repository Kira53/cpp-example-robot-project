#include <Commands/CrossLowBar.h>
#include <Commands/SetArmSpeed.h>
#include <Commands/DriveStraight.h>

CrossLowBar::CrossLowBar() {

	// Lower the arm to fit under the low bar
	// This sets the speed to 0.5 for 0.15 seconds
	AddSequential(new SetArmSpeed(0.5, 0.15));

	// Drives backwards to the low bar
	// Sets the speed to -0.7 for 3 seconds
	AddSequential(new DriveStraight(-0.7, 3));

}

