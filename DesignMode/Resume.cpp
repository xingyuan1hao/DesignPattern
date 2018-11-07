#include "StdAfx.h"
#include "Resume.h"
#include "WorkExperience.h"
#include <string>
using namespace std;

Resume::Resume()
{
	 pWorkExperience = NULL;
}

Resume::Resume(char *name,char*sex,int age)
{
	strcpy(this->name,name);
	strcpy(this->sex,sex);
	this->age = age;
	pWorkExperience = NULL;
}

Resume::Resume(const Resume& obj)
{
	strcpy(name, obj.name);
	strcpy(sex,obj.sex);
	age = obj.age;
	SetWorkExperience(obj.pWorkExperience->GetCompany(),obj.pWorkExperience->GetDate());

}

Resume::~Resume(void)
{

}


void Resume::SetWorkExperience(char *company,char *date)
{
		pWorkExperience = new WorkExperience(company,date);
}

IPrototype* Resume::Clone()
{
	return new Resume(*this);
}

const char *Resume::GetName()
{
	return name;
}

const char *Resume::GetSex()
{
	return sex;
}

const int Resume::GetAge()
{
	return age;
}

const WorkExperience *Resume::GetExperience()
{
	return pWorkExperience;
}

void prototype()
{
	Resume John("John","male",38);
	John.SetWorkExperience("baidu","1997-1998");

	Resume  *John1 = (Resume*)John.Clone();
	John1->SetWorkExperience("taobao","1998-2010");

	Resume *John2 = (Resume*)John.Clone();
	John2->SetWorkExperience("tenent","2010-2013");

}