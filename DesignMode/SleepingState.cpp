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
	cout<<"��ǰʱ��"<<work->GetHour()<<"�����ˣ�˯����~\n";
}
