/*
 * Figure.cpp
 *
 *  Created on: 25. mai 2015
 *      Author: amundersland
 */

#include "Figure.h"

using namespace std;

Figure::Figure(string fillColor, string borderColor, double borderThickness)
{
	this->fillColor = fillColor;
	this->borderColor = borderColor;
	this->borderThickness = borderThickness;
}


void Figure::move(double x, double y)
{
	Coordinate add(x,y);

	for (int i = 0; i < points.size();i++)
		points[i] = points[i] + add;
}

