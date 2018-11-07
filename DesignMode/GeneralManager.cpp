#include "StdAfx.h"
#include "GeneralManager.h"
#include "Request.h"


GeneralManager::GeneralManager(string name)
	:Manager(name)
{
}


GeneralManager::~GeneralManager(void)
{
}

void GeneralManager::RequestApplications( Request *request )
{
	cout<<name.c_str() <<"´¦ÀíÁË"<<request->GetRequestContent().c_str()<<"\n";
}
