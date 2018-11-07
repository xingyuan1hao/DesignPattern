#pragma once
#include "IPrototype.h"
class WorkExperience;
class Resume:public IPrototype
{
public:
	Resume();
	Resume(char *name,char*sex,int age);
	Resume(const Resume& obj);
	~Resume(void);
	void SetWorkExperience(char *company,char *date);
	virtual IPrototype* Clone() override;
	const char *GetName();
	const char *GetSex();
	const int GetAge();
	const WorkExperience *GetExperience();
private:
	char name[32];
	char sex[10];
	unsigned int age;
	WorkExperience *pWorkExperience;
};

