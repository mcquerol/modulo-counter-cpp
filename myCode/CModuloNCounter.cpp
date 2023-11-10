/*
 * CModuloNCounter.cpp
 *
 *  Created on: 7 Nov 2021
 *      Author: Mateo C. Querol
 */

#include "CModuloNCounter.h"

#include <iostream>

using namespace std;

CModuloNCounter::CModuloNCounter(unsigned int base, unsigned int numDigits)
: m_base(base), m_numDigits(numDigits)
{
    mdc = new CModuloNDigit[m_numDigits];

    for (unsigned int i = 0; i < m_numDigits; i++)
    {
        mdc[i] = CModuloNDigit(m_base);
    }
}


CModuloNCounter::CModuloNCounter(const CModuloNCounter &other)
: m_base(other.m_base), m_numDigits(other.m_numDigits)
{

	mdc = new CModuloNDigit[m_numDigits];
    for (unsigned int i = 0; i < m_numDigits; i++)
    {
        mdc[i] = other.mdc[i];
    }
}


CModuloNCounter::~CModuloNCounter()
{
    delete[] mdc;
}

CModuloNCounter &CModuloNCounter::operator=(const CModuloNCounter &other)
{
	if (this != &other) {
		// Cleanup existing resources
		delete[] mdc;

		// Copy data from the other object
		m_numDigits = other.m_numDigits;
		m_base = other.m_base;

		// Allocate new resources and copy digits
		mdc = new CModuloNDigit[m_numDigits];
		for (unsigned int i = 0; i < m_numDigits; i++) {
			mdc[i] = other.mdc[i];
		}
	}
	return *this;
}

//increase first then check for overflow
CModuloNCounter &CModuloNCounter::operator++()
{
    for (unsigned int i = 0; i < m_numDigits; i++)
    {
        ++mdc[i];

        // Check for overflow and propagate to the next digit
        if (mdc[i].getCurrVal() != 0)
        {
            break;
        }
    }
    return *this; // Prefix increment
}

CModuloNCounter CModuloNCounter::operator++(int)
{
    CModuloNCounter temp (*this);
    ++(*this);
    return temp;
}


void CModuloNCounter::print() const
{
    for (int i = m_numDigits - 1; i >= 0; i--) {
    	if (m_base == 16)
    	{
    		std::cout << hex << mdc[i].getCurrVal() << "";
    	}
    	else
    	{
    		std::cout << mdc[i].getCurrVal() << "";
    	}
    }
    cout << endl;
}
