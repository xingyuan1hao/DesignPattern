#pragma once
#include "WebSite.h"
class ConcreteWebSite:public WebSite
{
public:
	ConcreteWebSite(int name);
	~ConcreteWebSite(void);

	virtual void Use();
private:
	int name;
};

