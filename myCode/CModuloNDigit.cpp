#include "CModuloNDigit.h"
#include <iostream>

using namespace std;


/**
 * @brief Constructor for CModuloNDigit.
 * @param maxVal The maximum value for the digit.
 */
CModuloNDigit::CModuloNDigit(unsigned int maxVal) : m_maxVal(maxVal), m_currVal(0)
{

}

/**
 * @brief Default constructor for CModuloNDigit.
 */
CModuloNDigit::CModuloNDigit()
{

}

/**
 * @brief Copy constructor for CModuloNDigit.
 * @param other Another CModuloNDigit object to copy from.
 */
CModuloNDigit::CModuloNDigit(const CModuloNDigit &other) : m_maxVal(other.m_maxVal), m_currVal(other.m_currVal)
{

}

/**
 * @brief Destructor for CModuloNDigit.
 */
CModuloNDigit::~CModuloNDigit()
{

}

/**
 * @brief Overloaded assignment operator for CModuloNDigit.
 * @param other Another CModuloNDigit object to copy from.
 * @return Reference to the modified CModuloNDigit object.
 */
CModuloNDigit &CModuloNDigit::operator=(const CModuloNDigit &other)
{
	m_currVal = other.m_currVal;
	m_maxVal = other.m_maxVal;

	return *this;
}

/**
 * @brief Prefix increment operator for CModuloNDigit.
 * @return Reference to the modified CModuloNDigit object.
 */
CModuloNDigit &CModuloNDigit::operator++()
{
	m_currVal = (m_currVal + 1) % m_maxVal;
	return *this;
}

/**
 * @brief Postfix increment operator for CModuloNDigit.
 * @param int Dummy parameter to differentiate from the prefix increment.
 * @return A copy of the original CModuloNDigit before increment.
 */
CModuloNDigit CModuloNDigit::operator++(int)
{
	CModuloNDigit temp(*this);
	++(*this);
	return temp;
}

/**
 * @brief Getter for the current value of the digit.
 * @return The current value of the digit.
 */
unsigned int CModuloNDigit::getCurrVal() const
{
	return m_currVal;
}

/**
 * @brief Getter for the maximum value of the digit.
 * @return The maximum value of the digit.
 */
unsigned int CModuloNDigit::getMaxVal() const
{
	return m_maxVal;
}
