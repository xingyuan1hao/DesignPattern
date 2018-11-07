#pragma once
class WorkExperience
{
public:
	WorkExperience(char *company,char *date);
	~WorkExperience(void);
	char *GetCompany();
	char *GetDate();
	void SetCompany(char *company);
	void SetDate(char *date);
private:
	char company[32];
	char date[64];
};

