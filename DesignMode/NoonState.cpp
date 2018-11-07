#include "StdAfx.h"
#include "NoonState.h"
#include "Work.h"
#include "AfternoonState.h"


NoonState::NoonState(void)
{
}


NoonState::~NoonState(void)
{
}

void NoonState::WriteProgram( Work *work )
{
	if(work->GetHour() < 13)
	{
		cout<<"��ǰʱ��"<<work->GetHour()<<"���緸�������ݡ�\n";
	}
	else
	{
		work->SetState(new AfternoonState());
		work->WriteProgram();
	}
}
