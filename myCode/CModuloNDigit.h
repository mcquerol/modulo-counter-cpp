#ifndef CMODULONDIGIT_H_
#define CMODULONDIGIT_H_

class CModuloNDigit
{
private:
    unsigned int m_maxVal;
    unsigned int m_currVal;

public:
    CModuloNDigit(unsigned int maxVal);
    CModuloNDigit(); // Default constructor
    CModuloNDigit(const CModuloNDigit &other); // Copy constructor
    ~CModuloNDigit(); // Destructor

    CModuloNDigit &operator=(const CModuloNDigit &other);
    CModuloNDigit &operator++();
    CModuloNDigit operator++(int);

    unsigned int getCurrVal() const;
    unsigned int getMaxVal() const;
};

#endif //CMODULONDIGIT_H_
