#ifndef SETARMSPEED_H_
#define SETARMSPEED_H_

#include "../CommandBase.h"
#include "WPILib.h"

class SetArmSpeed: public CommandBase
{

private:
	float speed;
	float duration;

public:
	// Moves arm for duration and speed specified in constructor
	SetArmSpeed();
	SetArmSpeed(float speed, float duration);

	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

};

#endif /* SRC_COMMANDS_SETARMSPEED_H_ */
