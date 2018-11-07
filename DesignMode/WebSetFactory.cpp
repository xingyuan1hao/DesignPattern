#include "StdAfx.h"
#include "WebSetFactory.h"
#include "WebSite.h"
#include "ConcreteWebSite.h"


WebSetFactory::WebSetFactory(void)
{
}


WebSetFactory::~WebSetFactory(void)
{
}

int WebSetFactory::GetWebSiteCounts()
{
	return webs.size();
}

WebSite *WebSetFactory::GetWebSiteCategory(int type)
{
	map<int,WebSite*>::iterator itFind = webs.find(type);
	if (itFind != webs.end())
	{
		return  itFind->second;
	}
	else
	{
		WebSite *webSite = new ConcreteWebSite(type);
		webs[type] = webSite;
		return webSite;
	}
}

void flyWeight()
{
	WebSetFactory wsf;
	WebSite *w1 = wsf.GetWebSiteCategory(1);
	w1->Use();
	WebSite *w2 = wsf.GetWebSiteCategory(2);
	w2->Use();
	WebSite *w3 = wsf.GetWebSiteCategory(1);
	w3->Use();
	WebSite *w4 = wsf.GetWebSiteCategory(3);
	w4->Use();
	WebSite *w5 = wsf.GetWebSiteCategory(2);
	w5->Use();
}