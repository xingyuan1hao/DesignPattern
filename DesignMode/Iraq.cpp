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
	cout<<"�����˻�öԷ���Ϣ��"<<message.c_str()<<endl;
}
