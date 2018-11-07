#pragma once
#include "State.h"
class AfternoonState:public State
{
public:
	AfternoonState(void);
	~AfternoonState(void);

	virtual void WriteProgram( Work *work );

};

