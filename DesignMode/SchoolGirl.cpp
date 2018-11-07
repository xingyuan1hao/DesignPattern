#include "StdAfx.h"
#include "SchoolGirl.h"
#include <string>
using namespace std;

SchoolGirl::SchoolGirl(char *pName)
{
	strcpy(name,pName);
}


SchoolGirl::~SchoolGirl(void)
{
}

char *SchoolGirl::getName()
{
	return name;
}
