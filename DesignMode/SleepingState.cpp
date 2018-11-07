#include "StdAfx.h"
#include "SleepingState.h"
#include "Work.h"


SleepingState::SleepingState(void)
{
}


SleepingState::~SleepingState(void)
{
}

void SleepingState::WriteProgram( Work *work )
{
	cout<<"当前时间"<<work->GetHour()<<"不行了，睡觉了~\n";
}
