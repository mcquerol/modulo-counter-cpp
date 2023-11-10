#include "CModuloNDigit.h"
#include <iostream>
using namespace std;

CModuloNDigit::CModuloNDigit(unsigned int maxVal) : m_maxVal(maxVal), m_currVal(0)
{

}

CModuloNDigit::CModuloNDigit(const CModuloNDigit &other) : m_maxVal(other.m_maxVal), m_currVal(other.m_currVal)
{

}

CModuloNDigit::CModuloNDigit()
{
    // Add initialization if needed
}

CModuloNDigit::~CModuloNDigit()
{

}

CModuloNDigit& CModuloNDigit::operator=(const CModuloNDigit &other)
{
	m_currVal = other.m_currVal;
	m_maxVal = other.m_maxVal;

	return *this;
}

CModuloNDigit &CModuloNDigit::operator++()
{
	m_currVal = (m_currVal + 1) % m_maxVal;
	return *this;
}

CModuloNDigit CModuloNDigit::operator++(int)
{
	CModuloNDigit temp = *this;
	++(*this);
	return temp;
}

unsigned int CModuloNDigit::getCurrVal() const
{
	return m_currVal;
}

unsigned int CModuloNDigit::getMaxVal() const
{
	return m_maxVal;
}
