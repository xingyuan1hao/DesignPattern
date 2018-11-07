#pragma once
class Request;
class Manager
{
public:
	Manager(string name);
	~Manager(void);
	void SetSuperior(Manager *manager);
	virtual void RequestApplications(Request  *request) = 0;
protected:
	string name;
	Manager *manager;
};

