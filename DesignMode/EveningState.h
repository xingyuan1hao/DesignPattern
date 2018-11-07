#pragma once
#include "State.h"
class EveningState:public State
{
public:
	EveningState(void);
	~EveningState(void);

	virtual void WriteProgram( Work *work );

};

