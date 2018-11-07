#include "StdAfx.h"
#include "SQLServerFactory.h"
#include "SQLServerUser.h"
#include "SQLServerDepartment.h"


SQLServerFactory::SQLServerFactory(void)
{
}


SQLServerFactory::~SQLServerFactory(void)
{
}

IUser * SQLServerFactory::CreateUser()
{
	return new SQLServerUser();
}

IDepartment * SQLServerFactory::CreateDepartment()
{
	return new SQLServerDepartment();
}
