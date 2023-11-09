/*
 * CModuloNDigit.h
 *
 *  Created on: 6 Nov 2021
 *      Author: Mateo C. Querol
 */

#ifndef CMODULONDIGIT_H_
#define CMODULONDIGIT_H_

class CModuloNDigit
{
public:

	unsigned int currVal;
	unsigned int base;

	/**
	 * Class constructor passing the base as an input
	 */
	CModuloNDigit(unsigned int base = 10);

	/**
	 * check for overflow, if not increase counter by 1
	 */
	unsigned int increment();

	/**
	 * Print the current value of the counter
	 * (Print in Hex if base = 16)
	 */
	void printCount(unsigned int base);
};

#endif /* CMODULONDIGIT_H_ */
