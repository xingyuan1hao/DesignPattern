#include "StdAfx.h"
#include "BuildDirector.h"
#include "Builder.h"

BuildDirector::BuildDirector(void)
{
}


BuildDirector::~BuildDirector(void)
{

}

void BuildDirector::SetBuilder(Builder *builder)
{
	this->builder = builder;
}

void BuildDirector::Build()
{
	builder->BuildHead();
	builder->BuildLeftArm();
	builder->BuildRightArm();
	builder->BuildLeftLeg();
	builder->BuildRightLeg();
}
