#pragma once
#include "State.h"
class ForenoonState:public State
{
public:
	ForenoonState(void);
	~ForenoonState(void);

	virtual void WriteProgram( Work *work );

};

