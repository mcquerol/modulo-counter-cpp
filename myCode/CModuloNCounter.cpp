/*
 * CModuloNCounter.cpp
 *
 *  Created on: 7 Nov 2021
 *      Author: Mateo C. Querol
 */

#include "CModuloNCounter.h"
#include "CModuloNDigit.h"
#include <iostream>

using namespace std;

CModuloNCounter::CModuloNCounter(unsigned int digits, unsigned int base)
{
	this->base = base;
	if(digits == 0)
	{
		this->digits = 1;
	}
	this->digits = digits;
	this->mdc = new CModuloNDigit[this->digits]; //multiple digit counter array made up of single digit objects
	for(unsigned int index = 0; index < this->digits; index++)
	{
		this->mdc[index].base = this->base;
	}

}

CModuloNCounter::~CModuloNCounter()
{
	delete [] mdc;
}

/**
 * check for overflow, if not keep increasing the counter
 */
unsigned int CModuloNCounter::increment()
{
	for (unsigned int i = 0; i < this->digits; i++)
	{
		unsigned int carry = this->mdc[i].increment();
		if(carry == 0)
		{
			break;
		}
	}
	return 0;
}

/**
 * print n digits at a time
 */
void CModuloNCounter::print()
{
	for (short i = this->digits - 1; i >= 0; i--)
	{
		this->mdc[i].printCount(this->base);
	}
}
