#include "StdAfx.h"
#include "Company.h"
#include "ConcreteCompany.h"
#include "HRDepartment.h"
#include "FinanceDepartment.h"


Company::Company(string name)
{
	this->name = name;
}


Company::~Company(void)
{
}


void composite()
{
	Company *root = new ConcreteCompany("�����ܹ�˾");
	root->Add(new HRDepartment("�ܹ�˾������Դ��"));
	root->Add(new FinanceDepartment("�ܹ�˾����"));

	Company *comp = new ConcreteCompany("�Ϻ������ֹ�˾");
	comp->Add(new HRDepartment("�����ֹ�˾������Դ��"));
	comp->Add(new FinanceDepartment("�����ֹ�˾����"));
	root->Add(comp);

	Company *comp1 = new ConcreteCompany("�Ͼ����´�");
	comp1->Add(new HRDepartment("�Ͼ����´�������Դ��"));
	comp1->Add(new FinanceDepartment("�Ͼ����´�����"));
	root->Add(comp1);

	Company *comp2 = new ConcreteCompany("���ݰ��´�");
	comp2->Add(new HRDepartment("���ݰ��´�������Դ��"));
	comp2->Add(new FinanceDepartment("���ݰ��´�����"));
	root->Add(comp2);

	root->Display(1);
	root->LineOfDuty();
}