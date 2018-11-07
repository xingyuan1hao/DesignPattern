#include "StdAfx.h"
#include "Builder.h"
#include "BuildDirector.h"
#include "FatBuilder.h"
#include "ThinBuilder.h"


Builder::Builder(void)
{
}


Builder::~Builder(void)
{
}


void builder()
{
	BuildDirector builderDirector;
	builderDirector.SetBuilder(new FatBuilder());
	builderDirector.Build();

	builderDirector.SetBuilder(new ThinBuilder());
	builderDirector.Build();
}