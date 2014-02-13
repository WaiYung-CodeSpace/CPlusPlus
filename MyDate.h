#ifndef MYDATE_H
#define MYDATE_H


#include <sstream>
using namespace std;


class MyDate
{
	private:
		int month;
		int day;
		int year;
		ostringstream ReturnBuffer;

	public:
		MyDate (int=1, int=1, int=2001);
		~MyDate ();

		string getShortDate ();
		string getLongUSDate ();
		string getLongEuropeDate ();
};


#endif
