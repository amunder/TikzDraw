/*
 * Rectangle.cpp
 *
 *  Created on: 25. mai 2015
 *      Author: amundersland
 */

#include <sstream>

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(Coordinate upperLeft, Coordinate lowerRight, string borderColor, string fillColor, double borderThickness):Figure(fillColor, borderColor, borderThickness)
{
	points.push_back(upperLeft);
	points.push_back(lowerRight);
}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

string Rectangle::sLatexPrint()
{
	stringstream ss;
	char backSlash = 0x5c;

	//%\myBlock{corner upper left}{corner lower right}{color}
	//\newcommand{\myBlock}[3]{\filldraw[fill=#3, draw=black, very thick] (#1) rectangle (#2) ;}

	ss << backSlash;
	ss << "filldraw[fill=" << fillColor << ", draw=" << borderColor << ", line width=" << borderThickness << "pt] (" << points[0].sprint() << ") rectangle (" << points[1].sprint()  << ");";

	return ss.str();
}
//void move();
