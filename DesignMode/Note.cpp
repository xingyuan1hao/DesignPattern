#include "StdAfx.h"
#include "Note.h"


Note::Note(void)
{
}


Note::~Note(void)
{
}

void Note::Execute( string key,double value )
{
	string note;
	if (key.compare("C") == 0)
	{
		note = "1";
	}
	else if(key.compare("D") == 0)
	{
		note ="2";
	}
	else if(key.compare("E") == 0)
	{
		note ="3";
	}
	else if(key.compare("F") == 0)
	{
		note ="4";
	}
	else if(key.compare("G") == 0)
	{
		note ="5";
	}
	else if(key.compare("A") == 0)
	{
		note ="6";
	}
	else if(key.compare("B") == 0)
	{
		note ="7";
	}
	cout<<note.c_str()<<" ";
}
