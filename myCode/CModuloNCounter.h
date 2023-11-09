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
	unsigned int m_currVal;
	unsigned int m_base;

	CModuloNDigit *mdc;

public:
	CModuloNCounter(unsigned int base);
	CModuloNCounter(const CModuloNCounter& other)
	~CModuloNCounter();

	CModuloNCounter& operator=(const CModuloNCounter& other);
	CModuloNCounter& operator++();
	CModuloNCounter& operator++(int)

	unsigned int getBase() const;
	unsigned int getCurrVal() const;

	void print() const;

};

#endif /* CMODULONCOUNTER_H_ */
