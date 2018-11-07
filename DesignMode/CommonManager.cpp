#include "StdAfx.h"
#include "CommonManager.h"
#include "Request.h"


CommonManager::CommonManager(string name)
	:Manager(name)
{
}


CommonManager::~CommonManager(void)
{
}

void CommonManager::RequestApplications( Request *request )
{
	if (request->GetRequestNumber() < 10)
	{
		cout<<name.c_str() <<"´¦ÀíÁË"<<request->GetRequestContent().c_str()<<"\n";
	}
	else
	{
		manager->RequestApplications(request);
	}
}
