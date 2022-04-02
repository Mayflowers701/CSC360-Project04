#include <iostream>

#include "starField.hpp"

using namespace std;

//recursive solution
void recursiveClosestPoints(starField &field, double& shortestDistance, star &A, star &B) {

	//split field in half ( On )
  //init new halves
  starField lField;
  starField rField;

  //init left half
  for(unsigned i = 0; i < field.v.size()/2; i++){
      lField.v.push_back(field.v[i]);
  }

  //init right half
  for(unsigned i = field.v.size()/2; i < field.v.size(); i++){
      rField.v.push_back(field.v[i]);
  }


	//recursive calls


	//ignore all points farther from line than delta ( On )


	//"sort" points by y-coordinate ( Onlogn )


	//compute distance of each point from its next eleven neighbors
		//if any distance is < delta, update shortestDistance, A, and B


	//return
	return;
}
