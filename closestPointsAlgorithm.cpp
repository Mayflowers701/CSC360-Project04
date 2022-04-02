#include <string>
#include <float.h>
#include <iostream>

#include "starField.hpp"

using namespace std;

//prototype for recursive solution
void recursiveClosestPoints(starField &field, double& shortestDistance, pair<string, pair<double, double>>& A, pair<string, pair<double, double>>& B);

//prototypes for sorters
void sortX(starField &field);
void sortY(starField &field);

//front end for recursive solution
void closestPointsAlgorithm(starField &field) {

	//init variables for shortestDistance (delta) and the corresponding points
	double shortestDistance = DBL_MAX;
	pair<string, pair<double, double>> A;
	pair<string, pair<double, double>> B;

	//sort points by x-values
	sortX(field);

	//call recursive algorithm
	recursiveClosestPoints(field, shortestDistance, A, B);

	//print results
	cout << "Shortest Distance: " << shortestDistance << endl;
	cout << "Between " << A.first << ": (" << A.second.first << ", " << A.second.second << ") ";
	cout << "and " << B.first << ": (" << B.second.first << ", " << B.second.second << ") " << endl;

	return;
}

//recursive solution
void recursiveClosestPoints(starField &field, double& shortestDistance, pair<string, pair<double, double>>& A, pair<string, pair<double, double>>& B) {

	//split field in half ( On )
	

	//recursive calls


	//ignore all points farther from line than delta ( On )


	//"sort" points by y-coordinate ( Onlogn )


	//compute distance of each point from its next eleven neighbors
		//if any distance is < delta, update shortestDistance, A, and B


	//return
	return;
}