/*
 * CModuloNDigit.h
 *
 *  Created on: 6 Nov 2021
 *      Author: Mateo C. Querol
 */

#ifndef CMODULONDIGIT_H_
#define CMODULONDIGIT_H_

class CModuloNDigit
{
private:

	unsigned int m_currVal;
	unsigned int m_maxVal;

public:
	CModuloNDigit(unsigned int currVal, unsigned int maxVal);
	CModuloNDigit(const CModuloNDigit& other);
	~CModuloNDigit();

	CModuloNDigit& operator=(const CModuloNDigit& other);
	CModuloNDigit& operator++();
	CModuloNDigit& operator++(int)

	unsigned int getCurrVal() const;
	unsigned int getMaxVal() const;


};

#endif /* CMODULONDIGIT_H_ */
