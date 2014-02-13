#include <iostream>
#include "MySquare.h"
using namespace std;


int main ()
{
	MySquare objMySquare (2);

	cout << endl;
	cout << "Side      = " << objMySquare.getSide ()      << endl;
	cout << "Area      = " << objMySquare.getArea ()      << endl;
	cout << "Perimeter = " << objMySquare.getPerimeter () << endl;
	cout << endl;

	objMySquare.setSide (3);

	cout << endl;
	cout << "Side      = " << objMySquare.getSide ()      << endl;
	cout << "Area      = " << objMySquare.getArea ()      << endl;
	cout << "Perimeter = " << objMySquare.getPerimeter () << endl;
	cout << endl;

	return 0;
}
