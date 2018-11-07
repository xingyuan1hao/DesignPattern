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
	Company *root = new ConcreteCompany("北京总公司");
	root->Add(new HRDepartment("总公司人力资源部"));
	root->Add(new FinanceDepartment("总公司财务部"));

	Company *comp = new ConcreteCompany("上海华东分公司");
	comp->Add(new HRDepartment("华东分公司人力资源部"));
	comp->Add(new FinanceDepartment("华东分公司财务部"));
	root->Add(comp);

	Company *comp1 = new ConcreteCompany("南京办事处");
	comp1->Add(new HRDepartment("南京办事处人力资源部"));
	comp1->Add(new FinanceDepartment("南京办事处财务部"));
	root->Add(comp1);

	Company *comp2 = new ConcreteCompany("杭州办事处");
	comp2->Add(new HRDepartment("杭州办事处人力资源部"));
	comp2->Add(new FinanceDepartment("杭州办事处财务部"));
	root->Add(comp2);

	root->Display(1);
	root->LineOfDuty();
}