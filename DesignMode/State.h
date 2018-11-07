#pragma once
class Work;
class State
{
public:
	State(void);
	~State(void);
	virtual void WriteProgram(Work *work) = 0;
};

