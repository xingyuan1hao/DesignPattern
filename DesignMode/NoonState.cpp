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
		cout<<"当前时间"<<work->GetHour()<<"中午犯困，午休。\n";
	}
	else
	{
		work->SetState(new AfternoonState());
		work->WriteProgram();
	}
}
