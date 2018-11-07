#include "StdAfx.h"
#include "Expression.h"
#include "PlayContext.h"
#include "Scale.h"
#include "Note.h"


Expression::Expression(void)
{
}


Expression::~Expression(void)
{
}

void Expression::Interpret(PlayContext *context)
{
	if (context->GetText().length() <= 0)
	{
		return;
	}
	else
	{
		string playKey = context->GetText().substr(0,1);
		context->SetText(context->GetText().substr(2));
		double value = (double)atol(context->GetText().substr(0,context->GetText().find(" ")).c_str());
		context->SetText(context->GetText().substr(context->GetText().find("")+1));
		Execute(playKey,value);
	}
}

void interpreter()
{
	PlayContext *context = new PlayContext();
	context->SetText("O2E0G0A3E0G0.D3E0G0A0O3C1O2A0G1C0E0D3");
	Expression *expression = NULL;
	while(context->GetText().length() > 0)
	{
		string str = context->GetText().substr(0,1);
		if (str.compare("O") == 0)
		{
			expression = new Scale();
		}
		else if (str.compare("A")==0
			||str.compare("B")==0
			||str.compare("P")==0
			||str.compare("C")==0
			||str.compare("D")==0
			||str.compare("E")==0
			||str.compare("F")==0
			||str.compare("G")==0
			)
		{
			expression = new Note();
		}
		expression->Interpret(context);
	}
}