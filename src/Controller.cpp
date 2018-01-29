//============================================================================
// Name        : VectorPractice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

#include "Controller.hpp"

Controller :: Controller()
{

}

void Controller :: start()
{
	vector <int> loop1;
	vector <string> loop2;

	for (int i = 0; i<=14; i++)
	{
		loop1.push_back(i);

		cout << "Element pushed: " << loop1[i] << endl;
	}

	for (int i = 0; i<16; i++)
	{
		loop2.push_back("Cats");

		cout << "There are " << loop2[i] << "." << endl;
	}
}

