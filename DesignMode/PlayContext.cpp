#include "StdAfx.h"
#include "PlayContext.h"


PlayContext::PlayContext(void)
{
}


PlayContext::~PlayContext(void)
{
}

void PlayContext::SetText(string text)
{
	this->text = text;
}

string PlayContext::GetText()
{
	return text;
}
