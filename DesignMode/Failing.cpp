#include "StdAfx.h"
#include "Failing.h"


Failing::Failing(void)
{
}


Failing::~Failing(void)
{
}

void Failing::GetManConclusion( Person1 *person )
{
	cout<<"一个男人失败背后有一个女人\n";
}

void Failing::GetWomanConclusion( Person1 *person )
{
	cout<<"一个女人失败背后有一群女人\n";
}
