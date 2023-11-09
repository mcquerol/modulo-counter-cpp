
#include <iostream>
#include "CModuloNCounter.h"
using namespace std;

int main (void)
{

	unsigned int base;
	unsigned int digits;
	unsigned int maxCount;
	do
	{
		cout << "Enter the base and the number of digits you want for your counter and the max count: " << endl;
		cin >> base;
		cin >> digits;
		cin >> maxCount;

	}while(!(digits > 1) && !(base == 2 || base == 8 || base == 10 || base == 16));


	cout << "MODULO COUNTER : base " << base << " counter with " << digits << " digits and a max count of " << maxCount << endl;
	CModuloNCounter mdc(digits,base);
	for(unsigned int count = 0; count < maxCount; count++)
	{
		mdc.increment();
		mdc.print();
		cout << endl;
	}


	return 0;
}
