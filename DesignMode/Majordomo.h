#pragma once
#include "Manager.h"
class Majordomo:public Manager
{
public:
	Majordomo(string name);
	~Majordomo(void);

	virtual void RequestApplications( Request *request );

};

