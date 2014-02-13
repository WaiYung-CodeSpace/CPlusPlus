#include <iostream>
#include <iomanip>
#include <sstream>
#include "MyDate.h"
using namespace std;


MyDate::MyDate (int m, int d, int y)
{
	if ((m <    1 || m >   12) ||
		(d <    1 || d >   31) ||
		(y < 1900 || y > 2010))
	{
		month =    1;
		day   =    1;
		year  = 2001;
	}
	else
	{
		month = m;
		day   = d;
		year  = y;
	}
}


MyDate::~MyDate ()
{
}


string MyDate::getShortDate ()
{
	ReturnBuffer.str ("");  // Empty string
	ReturnBuffer.clear ();  // Clear error flags

	ReturnBuffer << endl << month << "/" << day << "/" << setw (2) << year << endl;

	return ReturnBuffer.str ();
}


string MyDate::getLongUSDate ()
{
	ReturnBuffer.str ("");  // Empty string
	ReturnBuffer.clear ();  // Clear error flags

	switch (month)
	{
		case  1: ReturnBuffer << "January";   break;
		case  2: ReturnBuffer << "February";  break;
		case  3: ReturnBuffer << "March";     break;
		case  4: ReturnBuffer << "April";     break;
		case  5: ReturnBuffer << "May";       break;
		case  6: ReturnBuffer << "June";      break;
		case  7: ReturnBuffer << "July";      break;
		case  8: ReturnBuffer << "August";    break;
		case  9: ReturnBuffer << "September"; break;
		case 10: ReturnBuffer << "October";   break;
		case 11: ReturnBuffer << "November";  break;
		case 12: ReturnBuffer << "December";  break;
		default: ReturnBuffer << "January";   break;
	}

	ReturnBuffer << " " << day << ", " << setw (4) << year << endl;

	return ReturnBuffer.str ();
}


string MyDate::getLongEuropeDate ()
{
	ReturnBuffer.str ("");  // Empty string
	ReturnBuffer.clear ();  // Clear error flags

	ReturnBuffer << day << " ";

	switch (month)
	{
		case  1: ReturnBuffer << "January";   break;
		case  2: ReturnBuffer << "February";  break;
		case  3: ReturnBuffer << "March";     break;
		case  4: ReturnBuffer << "April";     break;
		case  5: ReturnBuffer << "May";       break;
		case  6: ReturnBuffer << "June";      break;
		case  7: ReturnBuffer << "July";      break;
		case  8: ReturnBuffer << "August";    break;
		case  9: ReturnBuffer << "September"; break;
		case 10: ReturnBuffer << "October";   break;
		case 11: ReturnBuffer << "November";  break;
		case 12: ReturnBuffer << "December";  break;
		default: ReturnBuffer << "January";   break;
	}

	ReturnBuffer << " " << setw (4) << year << endl;

	return ReturnBuffer.str ();
}
