/*
 * scheduler.cpp
 *
 *  Created on: Aug 18, 2015
 *      Author: datacom
 */
#include "scheduler.h"
#include <list>



std::list<Scheduler_element_t> scheduler_elements;


void Scheduler_Insert(Scheduler_element_t &element)
{
	scheduler_elements.push_back(element);
}

void Scheduler_Remove(Scheduler_element_t &element)
{
	scheduler_elements.pop_front();
}

Scheduler_element_t& Scheduler_GetFirst(void)
{
	return scheduler_elements.front();
}
