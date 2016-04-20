#ifndef SETFLYWHEELS_H_
#define SETFLYWHEELS_H_

#include "../CommandBase.h"
#include "WPILib.h"

class SetFlywheels: public CommandBase
{

private:
	float speed;

public:
	static const float SHOOT_SPEED; // Speed for shooting
	static const float PULL_SPEED; // Speed for pulling in boulders
	static const float RESET_SPEED; // Reset speed to zero

	// Sets flywheels to specified speed
	// Safety is off, they will continue running at this speed
	SetFlywheels(float speed);

	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

};

#endif
