#include "StdAfx.h"
#include "AfternoonState.h"
#include "Work.h"
#include "EveningState.h"
#include "RestState.h"

AfternoonState::AfternoonState(void)
{
}


AfternoonState::~AfternoonState(void)
{
}

void AfternoonState::WriteProgram( Work *work )
{
	if (work->GetHour() < 17)
	{
		cout<<"当前时间"<<work->GetHour()<<"下午状态不错，继续努力\n";
	}
	else
	{
		work->SetState( new EveningState());
		work->WriteProgram();
	}
}
