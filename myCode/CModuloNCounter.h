/*
 * CModuloNCounter.h
 *
 *  Created on: 7 Nov 2021
 *      Author: Mateo C. Querol
 */

#ifndef CMODULONCOUNTER_H_
#define CMODULONCOUNTER_H_

#include "CModuloNDigit.h"

class CModuloNCounter
{
private:
	/**
	 * provide the same base to each digit
	 */
	unsigned int base;

	/**
	 * provide the number of digits to be displayed
	 */
	unsigned int digits;

	/**
	 * output will be a CModuloNDigit array of size digits
	 */
	CModuloNDigit* mdc;

public:
	CModuloNCounter(unsigned int digits, unsigned int base);
	~CModuloNCounter();
	/**
	 * print n digits at a time
	 */
	void print();
	unsigned int increment();
};

#endif /* CMODULONCOUNTER_H_ */
