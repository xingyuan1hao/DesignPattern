#pragma once
#include "WebSite.h"
class WebSite;
class WebSetFactory
{
	map<int,WebSite*>webs;
public:
	WebSetFactory(void);
	~WebSetFactory(void);

	int GetWebSiteCounts();
	WebSite *GetWebSiteCategory(int type);
};

