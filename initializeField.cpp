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
	pair<string, pair<double, double> > star;
	for (int i = 0; i < fieldSize; i++) {
		file >> star.first;
		file >> star.second.first;
		file >> star.second.second;
		field.v.push_back(star);
	}

	//return
	return field;

}