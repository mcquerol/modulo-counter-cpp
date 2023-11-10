#ifndef CMODULONDIGIT_H_
#define CMODULONDIGIT_H_

/**
 * @brief Represents a modulo N digit.
 */
class CModuloNDigit
{
private:
    unsigned int m_maxVal; ///< Maximum value for the digit.
    unsigned int m_currVal; ///< Current value of the digit.

public:
    /**
     * @brief Constructor for CModuloNDigit.
     * @param maxVal The maximum value for the digit.
     */
    CModuloNDigit(unsigned int maxVal);

    /**
     * @brief Default constructor for CModuloNDigit.
     */
    CModuloNDigit();

    /**
     * @brief Copy constructor for CModuloNDigit.
     * @param other Another CModuloNDigit object to copy from.
     */
    CModuloNDigit(const CModuloNDigit &other);

    /**
     * @brief Destructor for CModuloNDigit.
     */
    ~CModuloNDigit();

    /**
     * @brief Overloaded assignment operator for CModuloNDigit.
     * @param other Another CModuloNDigit object to copy from.
     * @return Reference to the modified CModuloNDigit object.
     */
    CModuloNDigit &operator=(const CModuloNDigit &other);

    /**
     * @brief Prefix increment operator for CModuloNDigit.
     * @return Reference to the modified CModuloNDigit object.
     */
    CModuloNDigit &operator++();

    /**
     * @brief Postfix increment operator for CModuloNDigit.
     * @param int Dummy parameter to differentiate from the prefix increment.
     * @return A copy of the original CModuloNDigit before increment.
     */
    CModuloNDigit operator++(int);

    /**
     * @brief Getter for the current value of the digit.
     * @return The current value of the digit.
     */
    unsigned int getCurrVal() const;

    /**
     * @brief Getter for the maximum value of the digit.
     * @return The maximum value of the digit.
     */
    unsigned int getMaxVal() const;
};

#endif /* CMODULONDIGIT_H_ */
