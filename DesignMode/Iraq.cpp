#include "StdAfx.h"
#include "Iraq.h"


Iraq::Iraq(UnitedNations *mediator)
		:Country(mediator)
{
}


Iraq::~Iraq(void)
{
}

void Iraq::GetMessage(string message)
{
	cout<<"伊拉克获得对方消息："<<message.c_str()<<endl;
}
