/*
 * CModuloNDigit.cpp
 *
 *  Created on: 6 Nov 2021
 *      Author: Mateo C. Querol
 */

#include "CModuloNDigit.h"
#include <iostream>

using namespace std;

CModuloNDigit::CModuloNDigit(unsigned int base)
{
	if(base <= 16)
	{
		this->base = base;
	}
	else
	{
		this->base = 10;
	}
	this->currVal = 0;
}

/**
 * check for overflow, if not keep increasing the counter
 */
unsigned int CModuloNDigit::increment()
{
	if (this->currVal < this->base-1)
	{
		this->currVal++;
		return 0;
	}
	else
	{
		this->currVal=0;
		return 1;
	}
}

/**
 * Print the current value of the counter
 * (Print in Hex if base = 16)
 */
void CModuloNDigit::printCount(unsigned int base)
{
	if (base == 16)
	{
		cout << hex << this->currVal;
	}
	else
	{
		cout << this->currVal;
	}
}
