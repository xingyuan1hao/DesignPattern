#pragma once
#include "State.h"
class SleepingState:public State
{
public:
	SleepingState(void);
	~SleepingState(void);

	virtual void WriteProgram( Work *work );

};

