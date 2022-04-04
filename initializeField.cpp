/*
* FILE: initializeField.cpp
* AUTHOR: Eli Madi
* DATE: April 04, 2022
* PURPOSE: Method for initializing a starField from input file.
*/

#include <fstream>
#include <utility>
#include <string>

#include "starField.hpp"

using namespace std;

//handles file input, returns array of pairs representing point field
starField initializeField(string fileName) {

	//open file
	ifstream file(fileName);

	//number of points in field
	int fieldSize;
	file >> fieldSize;

	//initialize field to array with size fieldSize
	starField field;

	//reserve appropriate space to avoid resizing!
	field.v.reserve(fieldSize);

	//initialize field
	star newStar;
	for (int i = 0; i < fieldSize; i++) {
		file >> newStar.s.first;
		file >> newStar.s.second.first;
		file >> newStar.s.second.second;
		field.v.push_back(newStar);
	}

	//return
	return field;

}
