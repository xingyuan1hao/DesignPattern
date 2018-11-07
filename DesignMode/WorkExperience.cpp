#include "StdAfx.h"
#include "WorkExperience.h"
#include <string>
using namespace std;

WorkExperience::WorkExperience(char *company,char *date)
{
	strcpy(this->company,company);
	strcpy(this->date,date);
}


WorkExperience::~WorkExperience(void)
{

}

char *WorkExperience::GetCompany()
{
	return company;
}

char *WorkExperience::GetDate()
{
	return date;
}

void WorkExperience::SetCompany(char *company)
{
	strcpy(this->company,company);
}

void WorkExperience::SetDate(char *date)
{
	strcpy(this->date,date);
}
