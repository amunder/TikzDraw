/*
 * Terminal.h
 *
 *  Created on: 25. mai 2015
 *      Author: amundersland
 */

#ifndef TERMINAL_H_
#define TERMINAL_H_

#include <vector>
#include <string>

#include "Element.h"

class Terminal {
public:
	Terminal();
	virtual ~Terminal();

	void addElement();
	void listElements();
	void mainInterface();

	void writeToFile(std::string inFile, std::string outfile, std::string startCode); // the Terminal writes to file after "startCode" in inFile.

private:
	std::vector<Element> elements;

};

#endif /* TERMINAL_H_ */
