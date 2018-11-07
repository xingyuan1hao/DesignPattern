#include "StdAfx.h"
#include "Woman.h"
#include "Action.h"


Woman::Woman(void)
{
}


Woman::~Woman(void)
{
}

void Woman::Accept( Action *action )
{
	action->GetWomanConclusion(this);
}
