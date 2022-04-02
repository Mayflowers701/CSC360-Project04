#include <fstream>
#include <utility>
#include <string>

#include "starField.hpp"

using namespace std;

//handles file input, returns array of pairs representing point field
starField initializeField(string fileName) {

	//open file
	ifstream file("test0.txt");

	//number of points in field
	int fieldSize;
	file >> fieldSize;

	//initialize field to array with size fieldSize
	starField field;

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
