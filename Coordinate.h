/*
 * Coordinate.h
 *
 *  Created on: 25. mai 2015
 *      Author: amundersland
 */

#ifndef COORDINATE_H_
#define COORDINATE_H_

#include <string>

class Coordinate {
public:
	Coordinate();
	Coordinate(double x, double y){this->x = x; this->y = y;}
	Coordinate(const Coordinate &co){x = co.x; y = co.y;}
	Coordinate(std::string input);

	virtual ~Coordinate();

	Coordinate& operator= (const Coordinate &co);
	Coordinate& operator+ (const Coordinate &co);


	std::string sprint();

private:
	double x;
	double y;
};

#endif /* COORDINATE_H_ */
