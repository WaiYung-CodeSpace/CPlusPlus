#include "MySquare.h"
#include <iostream>
using namespace std;


MySquare::MySquare (int s)
{
	side      = s;
	area      = s * s;
	perimeter = s * 4;
}


MySquare::~MySquare ()
{
}


void MySquare::setSide (int s)
{
	side      = s;
	area      = s * s;
	perimeter = s * 4;
}


int MySquare::getSide ()      {return side;}
int MySquare::getArea ()      {return area;}
int MySquare::getPerimeter () {return perimeter;}
