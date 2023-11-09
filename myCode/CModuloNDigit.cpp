#include "CModuloNDigit.h"

using namespace std;

CModuloNDigit::CModuloNDigit(unsigned int maxVal) : m_maxVal(maxVal), m_currVal(0)
{

}

CModuloNDigit::CModuloNDigit(const CModuloNDigit &other) : m_maxVal(maxVal), m_currVal(other.m_currValue)
{

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

CModuloNDigit& CModuloNDigit::operator++()
{
	m_currValue = (m_currValue + 1) % m_maxVal;

	return *this;
}

CModuloNDigit& CModuloNDigit::operator++(int)
{
//TODO operator overload code
}

unsigned int CModuloNDigit::getCurrVal() const
{
	return m_currVal;
}

unsigned int CModuloNDigit::getMaxVal() const
{
	return m_maxVal;
}
