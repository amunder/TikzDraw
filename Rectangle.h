/*
 * Rectangle.h
 *
 *  Created on: 25. mai 2015
 *      Author: amundersland
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Figure.h"

class Rectangle:public Figure{
public:
	Rectangle(Coordinate upperLeft, Coordinate lowerRight, std::string borderColor = "black", std::string fillColor = "red", double borderThickness = 0.2);
	virtual ~Rectangle();

	std::string sLatexPrint();
};

#endif /* RECTANGLE_H_ */
