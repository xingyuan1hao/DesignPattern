#include "StdAfx.h"
#include "Man.h"
#include "Action.h"


Man::Man(void)
{
}


Man::~Man(void)
{
}

void Man::Accept( Action *action )
{
	action->GetManConclusion(this);
}
