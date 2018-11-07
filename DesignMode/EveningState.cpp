#include "StdAfx.h"
#include "EveningState.h"
#include "Work.h"
#include "SleepingState.h"
#include "RestState.h"


EveningState::EveningState(void)
{
}


EveningState::~EveningState(void)
{
}

void EveningState::WriteProgram( Work *work )
{
	if(work->IsFinished())
	{
		work->SetState(new RestState());
		work->WriteProgram();
	}
	else
	{
		if (work->GetHour() < 21)
		{
			cout<<"当前时间"<<work->GetHour()<<"加班，疲惫至极\n";
		}
		else
		{
			work->SetState( new SleepingState());
			work->WriteProgram();
		}
	}
}
