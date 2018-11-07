#pragma once
#include "AbstractFactory.h"
class SQLServerFactory:public AbstractFactory
{
public:
	SQLServerFactory(void);
	~SQLServerFactory(void);

	virtual IUser * CreateUser() override;

	virtual IDepartment * CreateDepartment() override;

};

