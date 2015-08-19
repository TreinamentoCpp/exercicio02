/*
 * scheduler_types.h
 *
 *  Created on: Aug 18, 2015
 *      Author: datacom
 */

#ifndef SCHEDULER_TYPES_H_
#define SCHEDULER_TYPES_H_


struct Scheduler_element_t {
	void (*pFun)(int);
	const char* string;
};


#endif /* SCHEDULER_TYPES_H_ */
