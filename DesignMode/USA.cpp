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
	cout<<"������öԷ���Ϣ��"<<message.c_str()<<endl;
}
