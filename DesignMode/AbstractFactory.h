#pragma once

class IUser;
class IDepartment;

class AbstractFactory
{
public:
	AbstractFactory(void);
	~AbstractFactory(void);
public:
	virtual IUser     *CreateUser() = 0;
	virtual IDepartment *CreateDepartment() = 0;
};

