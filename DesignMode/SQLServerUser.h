#pragma once
#include "IUser.h"
class SQLServerUser:public IUser
{
public:
	SQLServerUser(void);
	~SQLServerUser(void);
};

