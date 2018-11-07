#include "StdAfx.h"
#include "Majordomo.h"
#include "Request.h"


Majordomo::Majordomo(string name)
	:Manager(name)
{
}


Majordomo::~Majordomo(void)
{
}

void Majordomo::RequestApplications( Request *request )
{
	if (request->GetRequestNumber() < 20)
	{
		cout<<name.c_str() <<"´¦ÀíÁË"<<request->GetRequestContent().c_str()<<"\n";
	}
	else
	{
		manager->RequestApplications(request);
	}
}
