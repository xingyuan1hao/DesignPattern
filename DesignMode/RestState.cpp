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
	cout<<"��ǰʱ��"<<work->GetHour()<<"������ɣ��°�ؼ�\n";
}
