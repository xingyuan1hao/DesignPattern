#include "StdAfx.h"
#include "Work.h"

#include <iostream>
#include "State.h"
#include "ForenoonState.h"
using namespace std;

Work::Work(void)
{
	finished = false;
	state = new ForenoonState();
}


Work::~Work(void)
{
}

bool Work::IsFinished()
{
	return finished;
}

void Work::SetFinished()
{
	finished = true;
}

void Work::SetState(State *state)
{
	this->state = state;
}

void Work::WriteProgram()
{
	state->WriteProgram(this);
}

void Work::SetHour(int hour)
{
	this->hour = hour;
}

int Work::GetHour()
{
	return hour;
}
