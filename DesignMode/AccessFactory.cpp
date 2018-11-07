#include "StdAfx.h"
#include "AccessFactory.h"
#include "AccessUser.h"
#include "AccessDepartment.h"


AccessFactory::AccessFactory(void)
{
}


AccessFactory::~AccessFactory(void)
{
}

IUser * AccessFactory::CreateUser()
{
	return new AccessUser();
}

IDepartment * AccessFactory::CreateDepartment()
{
	return new AccessDepartment();
}

