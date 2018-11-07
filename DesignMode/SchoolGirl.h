#pragma once
class SchoolGirl
{
public:
	SchoolGirl(char *pName);
	~SchoolGirl(void);
	char *getName();
private:
	char name[32];
};

