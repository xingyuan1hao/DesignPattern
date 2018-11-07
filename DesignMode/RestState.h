#pragma once
#include "State.h"
class RestState:public State
{
public:
	RestState(void);
	~RestState(void);

	virtual void WriteProgram( Work *work );

};

