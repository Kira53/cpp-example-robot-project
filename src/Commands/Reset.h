#ifndef RESET_H_
#define RESET_H_

#include "Commands/CommandGroup.h"
#include "WPILib.h"

class Reset : public CommandGroup {

public:
	// Resets subsystems to know state (0)
	Reset();
};

#endif
