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
		scale = "����";
		break;
	case 2:
		scale = "����";
		break;
	case 3:
		scale = "����";
		break;
	}
	cout<<scale.c_str()<<" ";
}
