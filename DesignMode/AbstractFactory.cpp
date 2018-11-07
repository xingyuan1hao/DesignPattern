#include "StdAfx.h"
#include "AbstractFactory.h"
#include "SQLServerFactory.h"
#include "AccessDepartment.h"
#include "AccessFactory.h"


AbstractFactory::AbstractFactory(void)
{
}


AbstractFactory::~AbstractFactory(void)
{
}

void abstractFactory()
{
	AbstractFactory *pAbstractFactory = new SQLServerFactory();
	pAbstractFactory->CreateUser();
	pAbstractFactory->CreateDepartment();

	pAbstractFactory = new AccessFactory();
	pAbstractFactory->CreateUser();
	pAbstractFactory->CreateDepartment();

}