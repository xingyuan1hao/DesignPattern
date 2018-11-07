#pragma once
#include "State.h"
class NoonState:public State
{
public:
	NoonState(void);
	~NoonState(void);

	virtual void WriteProgram( Work *work );

};

