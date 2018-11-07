#pragma once
#include "Manager.h"
class GeneralManager:public Manager
{
public:
	GeneralManager(string name);
	~GeneralManager(void);

	virtual void RequestApplications( Request *request );

};

