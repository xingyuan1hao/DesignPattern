#include "StdAfx.h"
#include "ForenoonState.h"
#include "Work.h"
#include "NoonState.h"


ForenoonState::ForenoonState(void)
{
}


ForenoonState::~ForenoonState(void)
{
}

void ForenoonState::WriteProgram( Work *work )
{
	if(work->GetHour()  < 12)
	{
		cout<<"当前时间"<<work->GetHour()<<" 上午工作，精神百倍\n";
	}
	else
	{
		work->SetState(new NoonState());
		work->WriteProgram();
	}
}
