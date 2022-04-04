/*
* FILE: closestPointsAlgorithm.cpp
* AUTHOR: Eli Madi
* DATE: April 04, 2022
* PURPOSE: "Front-end" funtion for solving closest points problem recursively.
* Sorts points and calls recursiveClosestPoints, then prints solution to console.
*/

#include <string>
#include <float.h>
#include <iostream>

#include "starField.hpp"

using namespace std;

//prototype for recursive solution
double recursiveClosestPoints(starField &field, double& shortestDistance, star &A, star &B);

//prototypes for sorters
void sortX(starField &field);
void sortY(starField &field);

//front end for recursive solution
void closestPointsAlgorithm(starField &field) {

	//init variables for shortestDistance (delta) and the corresponding points
	double shortestDistance = DBL_MAX;
	star A;
	star B;

	//sort points by x-values
	sortX(field);

	//call recursive algorithm
	recursiveClosestPoints(field, shortestDistance, A, B);

	//print results
	cout << "Shortest Distance: " << shortestDistance << endl;
	cout << "Between " << A.s.first << ": (" << A.s.second.first << ", " << A.s.second.second << ") ";
	cout << "and " << B.s.first << ": (" << B.s.second.first << ", " << B.s.second.second << ") " << endl;

	return;
}
