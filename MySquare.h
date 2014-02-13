#ifndef MYSQUARE_H
#define MYSQUARE_H


#include <iostream>
using namespace std;


class MySquare
{
	private:
		int side;
		int area;
		int perimeter;

	public:
		MySquare (int=1);
		~MySquare ();

		void setSide (int=1);

		int getSide ();
		int getArea ();
		int getPerimeter ();
};


#endif
