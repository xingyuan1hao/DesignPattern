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
		cout<<"��ǰʱ��"<<work->GetHour()<<"����״̬��������Ŭ��\n";
	}
	else
	{
		work->SetState( new EveningState());
		work->WriteProgram();
	}
}
