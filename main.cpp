/*
 * main.cpp
 *
 *  Created on: 25. mai 2015
 *      Author: amundersland
 */

#include <iostream>
#include <string>

#include "Coordinate.h"
#include "Rectangle.h"

using namespace std;

int main()
{

	Coordinate A(0,0), B(5,5);

	Rectangle R(A,B, "blue");
	string first = R.sLatexPrint();

	R.move(3,3);
	string sec = R.sLatexPrint();

	cout << "first: \n" << first << endl << "second\n" << sec << endl;



	return 1;
}
