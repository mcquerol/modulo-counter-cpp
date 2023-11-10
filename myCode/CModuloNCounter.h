#ifndef CMODULONCOUNTER_H_
#define CMODULONCOUNTER_H_

#include "CModuloNDigit.h"

/**
 * @brief Represents a modulo N counter.
 */
class CModuloNCounter
{
private:
    unsigned int m_base; ///< Base for the counter.
    unsigned int m_numDigits; ///< Number of digits in the counter.

    CModuloNDigit *mdc; ///< Array of modulo N digits.

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
