#include "StdAfx.h"
#include "FinanceDepartment.h"


FinanceDepartment::FinanceDepartment(string name)
	:Company(name)
{
}


FinanceDepartment::~FinanceDepartment(void)
{
}

void FinanceDepartment::Add( Company *c )
{
	
}

void FinanceDepartment::Remove( Company *c )
{
	
}

void FinanceDepartment::Display( int depth )
{
	for (int index = 0;index < depth;++index)
		cout<<"-";
	cout<<name.c_str()<<"\n";
}

void FinanceDepartment::LineOfDuty()
{
	cout<<name.c_str()<<"公司财务收支管理\n";
}
