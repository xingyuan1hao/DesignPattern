#include "StdAfx.h"
#include "HandSetBrand.h"
#include "HandSetBrandM.h"
#include "HandSetAddressList.h"
#include "HandSetBrandN.h"


HandSetBrand::HandSetBrand(void)
{
}


HandSetBrand::~HandSetBrand(void)
{
}

void HandSetBrand::SetHandSetSoft(HandSetSoft *handsetsoft)
{
	this->handsetsoft = handsetsoft;
}

void bridge()
{
	HandSetBrand *hsb = new HandSetBrandM();
	hsb->SetHandSetSoft(new HandSetAddressList());
	hsb->Run();

	hsb = new HandSetBrandN();
	hsb->SetHandSetSoft(new HandSetAddressList());
	hsb->Run();
}