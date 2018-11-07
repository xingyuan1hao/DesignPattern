#include "StdAfx.h"
#include "HRDepartment.h"


HRDepartment::HRDepartment(string name)
	:Company(name)
{
}


HRDepartment::~HRDepartment(void)
{
}

void HRDepartment::Add( Company *c )
{
	
}

void HRDepartment::Remove( Company *c )
{
	
}

void HRDepartment::Display( int depth )
{
	for (int index = 0;index < depth;++index)
		cout<<"-";
	cout<<name.c_str()<<"\n";
}

void HRDepartment::LineOfDuty()
{
	cout<<name.c_str()<<"员工招聘培训管理\n";
}
