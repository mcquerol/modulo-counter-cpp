#ifndef CMODULONCOUNTER_H_
#define CMODULONCOUNTER_H_

#include "CModuloNDigit.h"

/**
 * @file CModuloNCounter.h
 * @brief Defines the CModuloNCounter class, representing a modulo counter with multiple digits.
 * @author Mateo Ceballos Querol - 1112948
 * @date '2023-11-5'
 * This class encapsulates the concept of a modulo counter with multiple digits,
 * allowing incrementation and overflow handling for the entire counter.
 */
class CModuloNCounter
{
private:
    unsigned int m_base; ///< Base for the counter (2, 8, 10 or 16).
    unsigned int m_numDigits; ///< Number of digits in the counter.

    CModuloNDigit *m_pDigits; ///< Array of CModuloNDigit objects.

public:
    /**
     * @brief Constructor for CModuloNCounter.
     * @param base The base for the counter.
     * @param numDigits The number of digits in the counter.
     */
    CModuloNCounter(unsigned int base, unsigned int numDigits);

    /**
     * @brief Copy constructor for CModuloNCounter.
     * @param other Another CModuloNCounter object to copy from.
     */
    CModuloNCounter(const CModuloNCounter &other);

    /**
     * @brief Destructor for CModuloNCounter.
     */
    ~CModuloNCounter();

    /**
     * @brief Overloaded assignment operator for CModuloNCounter.
     * @param other Another CModuloNCounter object to copy from.
     * @return Reference to the modified CModuloNCounter object.
     */
    CModuloNCounter &operator=(const CModuloNCounter &other);

    /**
     * @brief Prefix increment operator for CModuloNCounter.
     * @return Reference to the modified CModuloNCounter object.
     */
    CModuloNCounter &operator++();

    /**
     * @brief Postfix increment operator for CModuloNCounter.
     * @param int Dummy parameter to differentiate from the prefix increment.
     * @return A copy of the original CModuloNCounter before increment.
     */
    CModuloNCounter operator++(int);

    /**
     * @brief Print the current state of the counter.
     */
    void print() const;
};

#endif /* CMODULONCOUNTER_H_ */
