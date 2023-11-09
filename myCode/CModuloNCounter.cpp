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

CModuloNCounter::CModuloNCounter(unsigned int numDigits, unsigned int base): m_base(base), m_numDigits(numDigits)
{
	mdc = new CModuloNDigit[numDigits]
}

CModuloNCounter::CModuloNCounter(const CModuloNCounter &other): m_base(other.m_base), m_numDigits(other.m_numDigits)
{
	mdc = new CModuloNDigit[]
}

CModuloNCounter::~CModuloNCounter()
{
	delete mdc[];
}

CModuloNCounter& CModuloNCounter::operator=(const CModuloNCounter &other)
{

	m_numDigits = other.m_numDigits;
	m_base = other.m_base;
}

CModuloNCounter& CModuloNCounter::operator++()
{

}

CModuloNCounter& CModuloNCounter::operator++(int)
{

}


void CModuloNCounter::print() const
{
    for (int i = 0; i < num_digits; ++i) {
        std::cout << digits[i].getValue() << " ";
    }
    std::cout << std::endl;
}
