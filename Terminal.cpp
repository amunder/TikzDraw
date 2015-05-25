/*
 * Terminal.cpp
 *
 *  Created on: 25. mai 2015
 *      Author: amundersland
 */

#include "Terminal.h"
#include <string>

using namespace std;

Terminal::Terminal() {
	// TODO Auto-generated constructor stub

}

Terminal::~Terminal() {
	// TODO Auto-generated destructor stub
}

void Terminal::addElement()
{
	cout << "Which element would you like to add ?" << endl;
	string choices = {"Rectangle"};

	int i;
	for (i = 0; i < choices.size();i++)
		cout << i+1 << choices[i] << endl;

	cout << endl << "Choice (1 - " << i << "):";
	int choice;
	cin >> choice;

	string input;
	if (choice == 1)
	{
		cout << "Set upper left corner \"x , \"y : ";
		cin >> input;
		Coordinate upperLeft(input);

		cout << "Set lower right corner \"x , \"y : ";
		cin >> input;
		Coordinate lowerRight(input);

		//cout << "Do you wish to change default fill color ? (y/n) ";
		//cin >> input;
		//if ()

	}




}
void Terminal::listElements();
