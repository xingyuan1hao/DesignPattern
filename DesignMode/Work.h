#pragma once
class State;
class Work
{
public:
	Work(void);
	~Work(void);
	bool IsFinished();
	void SetFinished();
	void SetState(State *state);
	void WriteProgram();
	void SetHour(int hour);
	int GetHour();
private:
	State   *state;
	int hour;
	bool finished;
};

