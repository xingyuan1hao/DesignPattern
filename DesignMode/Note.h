#pragma once
#include "Expression.h"
class Note:public Expression
{
public:
	Note(void);
	~Note(void);

	virtual void Execute( string key,double value );

};

