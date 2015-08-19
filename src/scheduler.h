/*
 * scheduler.h
 *
 *  Created on: Aug 18, 2015
 *      Author: datacom
 */

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

#include "scheduler_types.h"

void Scheduler_Schedule(Scheduler_element_t &element);
void Scheduler_Execute();

#endif /* SCHEDULER_H_ */
