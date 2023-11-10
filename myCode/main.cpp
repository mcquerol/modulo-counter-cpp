#include <iostream>
#include "CModuloNCounter.h"


#define COUNTER_NAME(x) \
    ((x) == 2 ? "binary" : \
    ((x) == 8 ? "octal" : \
    ((x) == 10 ? "decimal" : \
    ((x) == 16 ? "hexadecimal" : "N/A"))))

using namespace std;

int main (void)
{

	unsigned int base;
	unsigned int digits;
	unsigned int maxCount;

	do
	{
		cout << "Please enter the parameters of your counter:" << endl;
		cout << "How many digits?:" << endl;
		cin >> digits;
		cout << "What base? (2/8/10/16):" << endl;
		cin >> base;
		cout << "What is the maximum count?" << endl;
		cin >> maxCount;

	}while(!(digits > 1) && !(base == 2 || base == 8 || base == 10 || base == 16));


	CModuloNCounter Counter(base, digits);
	cout << digits << " digit " << COUNTER_NAME(base) << " counter" << endl;

	for(unsigned int count = 0; count < maxCount; count++)
	{
		Counter.print();
        ++Counter;
        //Counter.print();
        //Counter++;

	}

	return 0;
}
