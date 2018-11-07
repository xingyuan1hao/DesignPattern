#pragma once
#include "IDepartment.h"
class SQLServerDepartment:public IDepartment
{
public:
	SQLServerDepartment(void);
	~SQLServerDepartment(void);
};

