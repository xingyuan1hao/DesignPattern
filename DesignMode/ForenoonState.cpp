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
		cout<<"��ǰʱ��"<<work->GetHour()<<" ���繤��������ٱ�\n";
	}
	else
	{
		work->SetState(new NoonState());
		work->WriteProgram();
	}
}
