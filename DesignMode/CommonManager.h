#pragma once
#include "Manager.h"
class CommonManager:public Manager
{
public:
	CommonManager(string name);
	~CommonManager(void);

	virtual void RequestApplications( Request *request );

};

