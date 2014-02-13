#include <iostream>
#include "MyDate.h"
using namespace std;


int main ()
{
	MyDate objMyDate (9, 4, 2009);

	cout << objMyDate.getShortDate ()      << endl;
	cout << objMyDate.getLongUSDate ()     << endl;
	cout << objMyDate.getLongEuropeDate () << endl;

	return 0;
}
