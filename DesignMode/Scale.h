#pragma once
#include "Expression.h"
class Scale:public Expression
{
public:
	Scale(void);
	~Scale(void);

	virtual void Execute( string key,double value );

};

