#include "StdAfx.h"
#include "USA.h"


USA::USA(UnitedNations *mediator)
	:Country(mediator)
{
}


USA::~USA(void)
{
}

void USA::GetMessage(string message)
{
	cout<<"美国获得对方消息："<<message.c_str()<<endl;
}
