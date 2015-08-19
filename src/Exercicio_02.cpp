//============================================================================
// Name        : Exercicio_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "scheduler.h"
#include <iostream>
using ::std::cout;

void f1(int a)
{
	std::cout << "f1" << std::endl;
}

void f2(int a)
{
	std::cout << "f2" << std::endl;
}

void f3(int a)
{
	std::cout << "f3" << std::endl;
}

void f4(int a)
{
	std::cout << "f4" << std::endl;
}

int main() {

	Scheduler_element_t e1 {&f1, "f1"};
	Scheduler_element_t e2 {&f2, "f2"};
	Scheduler_element_t e3 {&f3, "f3"};
	Scheduler_element_t e4 {&f4, "f4"};

	Scheduler_Schedule(e2);
	Scheduler_Schedule(e1);
	Scheduler_Schedule(e3);
	Scheduler_Schedule(e4);

	Scheduler_Execute();

	return 0;
}
