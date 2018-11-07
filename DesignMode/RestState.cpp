#include "StdAfx.h"
#include "RestState.h"
#include "Work.h"


RestState::RestState(void)
{
}


RestState::~RestState(void)
{
}

void RestState::WriteProgram( Work *work )
{
	cout<<"当前时间"<<work->GetHour()<<"工作完成，下班回家\n";
}
