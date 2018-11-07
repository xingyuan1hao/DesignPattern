// DesignMode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SimpleFactory.h"
#include <process.h>

extern void simpleFactory();
extern void stragegy();
extern void decorator();
extern void proxy();
extern void factory();
extern void prototype();
extern void builder();
extern void observer();
extern void abstractFactory();
extern void state();
extern void adapter();
extern void memento();
extern void composite();
extern void bridge();
extern void command();
extern void chainOfResponsibility();
extern void mediator();
extern void flyWeight();
extern void interpreter();
extern void visitor();

int _tmain(int argc, _TCHAR* argv[])
{
	visitor();
	system("pause");
	return 0;
}

