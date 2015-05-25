/*
 * Figure.h
 *
 *  Created on: 25. mai 2015
 *      Author: amundersland
 */

#ifndef FIGURE_H_
#define FIGURE_H_

#include <string>
#include <vector>

#include "Coordinate.h"
#include "Element.h"

class Figure:public Element {
public:
	Figure(std::string fillColor, std::string borderColor, double borderThickness);
	virtual ~Figure(){}

	void move(double x, double y);
protected:

	std::string fillColor;
	std::string borderColor;

	double borderThickness;
};

#endif /* FIGURE_H_ */
