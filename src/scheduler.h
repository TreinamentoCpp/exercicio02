/*
 * scheduler.h
 *
 *  Created on: Aug 18, 2015
 *      Author: datacom
 */

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

#include "scheduler_types.h"

void Scheduler_Insert(Scheduler_element_t &element);
void Scheduler_Remove(Scheduler_element_t &element);
Scheduler_element_t& Scheduler_GetFirst(void);

#endif /* SCHEDULER_H_ */
