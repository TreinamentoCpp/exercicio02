/*
 * scheduler.cpp
 *
 *  Created on: Aug 18, 2015
 *      Author: datacom
 */
#include "scheduler.h"
#include <list>

std::list<Scheduler_element_t> scheduler_elements;

void Scheduler_Schedule(Scheduler_element_t &element)
{
	scheduler_elements.push_back(element);
}

void Scheduler_Execute()
{
	for (Scheduler_element_t &e : scheduler_elements) {
		e.pFun(1);
		scheduler_elements.pop_front();
	}
}
