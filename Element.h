/*
 * Element.h
 *
 *  Created on: 25. mai 2015
 *      Author: amundersland
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

#include <string>
#include <vector>

#include "Coordinate.h"

class Element {
public:
	Element();
	virtual ~Element();

	virtual std::string sLatexPrint() = 0;

protected:
	std::vector<Coordinate> points;
	std::string tag;
};

#endif /* ELEMENT_H_ */
