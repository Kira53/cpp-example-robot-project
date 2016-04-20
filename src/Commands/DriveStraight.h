#ifndef DRIVESTRAIGHT_H_
#define DRIVESTRAIGHT_H_

#include "../CommandBase.h"
#include "WPILib.h"

class DriveStraight: public CommandBase
{

private:
	float duration;
	float heading;
	float speed;

public:
	DriveStraight(float speed, float duration);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

};

#endif
