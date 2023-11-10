#include "CModuloNCounter.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructor for CModuloNCounter.
 * @param base The base for the counter.
 * @param numDigits The number of m_pDigits in the counter.
 */
CModuloNCounter::CModuloNCounter(unsigned int base, unsigned int numDigits)
: m_base(base), m_numDigits(numDigits)
{
	m_pDigits = new CModuloNDigit[m_numDigits];

    for (unsigned int i = 0; i < m_numDigits; i++)
    {
    	m_pDigits[i] = CModuloNDigit(m_base);
    }
}

/**
 * @brief Copy constructor for CModuloNCounter.
 * @param other Another CModuloNCounter object to copy from.
 */
CModuloNCounter::CModuloNCounter(const CModuloNCounter &other)
: m_base(other.m_base), m_numDigits(other.m_numDigits)
{
	m_pDigits = new CModuloNDigit[m_numDigits];
    for (unsigned int i = 0; i < m_numDigits; i++)
    {
    	m_pDigits[i] = other.m_pDigits[i];
    }
}

/**
 * @brief Destructor for CModuloNCounter.
 */
CModuloNCounter::~CModuloNCounter()
{
    delete[] m_pDigits;
}

/**
 * @brief Overloaded assignment operator for CModuloNCounter.
 * @param other Another CModuloNCounter object to copy from.
 * @return Reference to the modified CModuloNCounter object.
 */
CModuloNCounter &CModuloNCounter::operator=(const CModuloNCounter &other)
{
	if (this != &other) {
		// Cleanup existing resources
		delete[] m_pDigits;

		// Copy data from the other object
		m_numDigits = other.m_numDigits;
		m_base = other.m_base;

		// Allocate new resources and copy m_pDigits
		m_pDigits = new CModuloNDigit[m_numDigits];
		for (unsigned int i = 0; i < m_numDigits; i++) {
			m_pDigits[i] = other.m_pDigits[i];
		}
	}
	return *this;
}

/**
 * @brief Prefix increment operator for CModuloNCounter.
 * @return Reference to the modified CModuloNCounter object.
 */
CModuloNCounter &CModuloNCounter::operator++()
{
    for (unsigned int i = 0; i < m_numDigits; i++)
    {
        ++m_pDigits[i];

        // Check for overflow and propagate to the next digit
        if (m_pDigits[i].getCurrVal() != 0)
        {
            break;
        }
    }
    return *this; // Prefix increment
}

/**
 * @brief Postfix increment operator for CModuloNCounter.
 * @param int Dummy parameter to differentiate from the prefix increment.
 * @return A copy of the original CModuloNCounter before increment.
 */
CModuloNCounter CModuloNCounter::operator++(int)
{
    CModuloNCounter temp (*this);
    ++(*this);
    return temp;
}

/**
 * @brief Print the current state of the counter.
 */
void CModuloNCounter::print() const
{
    for (int i = m_numDigits - 1; i >= 0; i--) {
    	if (m_base == 16)
    	{
    		std::cout << hex << m_pDigits[i].getCurrVal() << "";
    	}
    	else
    	{
    		std::cout << m_pDigits[i].getCurrVal() << "";
    	}
    }
    cout << endl;
}
