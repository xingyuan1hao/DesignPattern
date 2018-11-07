#include "StdAfx.h"
#include "Scale.h"


Scale::Scale(void)
{
}


Scale::~Scale(void)
{
}

void Scale::Execute( string key,double value )
{
	string scale = "";
	int nValue = int(value);
	switch(nValue)
	{
	default:
		break;
	case 1:
		scale = "µÕ“Ù";
		break;
	case 2:
		scale = "÷–“Ù";
		break;
	case 3:
		scale = "∏ﬂ“Ù";
		break;
	}
	cout<<scale.c_str()<<" ";
}
