/*
 * Coordinate.cpp
 *
 *  Created on: 25. mai 2015
 *      Author: amundersland
 */

#include "Coordinate.h"

#include <sstream>
#include <cstdlib>

using namespace std;

Coordinate::Coordinate() {
	// TODO Auto-generated constructor stub

}

Coordinate::~Coordinate() {
	// TODO Auto-generated destructor stub
}


Coordinate::Coordinate(std::string input)
{
	string x, y;
	bool passedComma = false;
	for (int i = 0; i < input.size();i++)
	{
		if (input[i] == ',')
			passedComma = true;
		else if (isdigit(input[i]) && !passedComma)
			x += input[i];
		else if (isdigit(input[i]) && passedComma)
			y += input[i];
	}

	this->x = stof(x);
	this->y = stof(y);

}

Coordinate& Coordinate::operator= (const Coordinate &co)
{
	// check for self assignment
	if (this == &co)
		return *this;

	// assign new values
	x = co.x;
	y = co.y;

	return *this;
}

Coordinate& Coordinate::operator+ (const Coordinate &co)
{
	this->x += co.x;
	this->y += co.y;

	return *this;
}

string Coordinate::sprint()
{
	stringstream ss;
	ss << x;
	ss << ",";
	ss << y;
	return ss.str();
}
