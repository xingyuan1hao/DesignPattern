#include "StdAfx.h"
#include "Request.h"
#include "CommonManager.h"
#include "Majordomo.h"
#include "GeneralManager.h"


Request::Request(requestType rt,string requestContent,int number)
{
	this->rt = rt;
	this->requestContent = requestContent;
	this->number = number;
}


Request::~Request(void)
{
}

requestType Request::GetRequestType()
{
	return rt;
}

string Request::GetRequestContent()
{
	return requestContent;
}

int Request::GetRequestNumber()
{
	return number;
}

void chainOfResponsibility()
{
	Manager *m1 = new CommonManager("����");
	Manager *m2 = new Majordomo("�ܼ�");
	Manager *m3 = new GeneralManager("�ܾ���");
	m1->SetSuperior(m2);
	m2->SetSuperior(m3);

	Request req(leave,"���",19);
	m1->RequestApplications(&req);
}