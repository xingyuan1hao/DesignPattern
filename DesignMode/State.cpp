#include "StdAfx.h"
#include "State.h"
#include "Work.h"


State::State(void)
{
}


State::~State(void)
{
}

void state()
{
	Work *emergencyProjects = new Work();
	emergencyProjects->SetHour(9);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(10);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(12);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(13);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(14);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(17);
	emergencyProjects->WriteProgram();
//	emergencyProjects->SetFinished();
	emergencyProjects->SetHour(19);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(22);
	emergencyProjects->WriteProgram();

}