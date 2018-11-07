#pragma once
#include "AbstractFactory.h"
class AccessFactory:public AbstractFactory
{
public:
	AccessFactory(void);
	~AccessFactory(void);

	virtual IUser * CreateUser() override;

	virtual IDepartment * CreateDepartment() override;

};

