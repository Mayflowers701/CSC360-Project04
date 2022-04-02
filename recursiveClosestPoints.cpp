#include <iostream>
#include <float.h>

#include "starField.hpp"

using namespace std;

//prototype for distance function
double distance(star &a, star &b);

//prototype for sortY
void sortY(starField &field);

//prototype for sliceClosest
double sliceClosest(starField &field, double delta);

//testing
void printField(starField &field);


//recursive solution
double recursiveClosestPoints(starField &field, double& shortestDistance, star &A, star &B) {

  //base case: if there is only one point in this field, return max distance (no shortest distance possible here)
  if(field.v.size() <= 1){
    return DBL_MAX;
  }

  //---

	//split field in half ( On )
  //init new halves
  starField lField;
  starField rField;

  //determine x-coordinate for vertical split k

  //calculate middle position in array
  int middle = field.v.size()/2;

  //calculate average x-coordinate of
  //[middle - 1] <- the last element in left half
  //[middle]     <- the first element in right half
  //this is our dividing line's x-position
  double k = (field.v[middle - 1].s.second.first + field.v[middle].s.second.first) / 2;

  //init left half
  for(unsigned i = 0; i < field.v.size()/2; i++){
      lField.v.push_back(field.v[i]);
  }

  //init right half
  for(unsigned i = field.v.size()/2; i < field.v.size(); i++){
      rField.v.push_back(field.v[i]);
  }

  //---

	//recursive calls
  double lResult = recursiveClosestPoints(lField, shortestDistance, A, B);
  double rResult = recursiveClosestPoints(rField, shortestDistance, A, B);

  //keep smaller of these:
  double delta = min(lResult, rResult);

  //---

	//build slice of points closer to dividing line than delta ( On )
  starField slice;
  for(unsigned i = 0; i < field.v.size(); i++){

    //if this star has an x-coordinate whose distance from k is less than delta...
    if(abs( field.v[i].s.second.first - k ) < delta){

      //add this star to slice
      slice.v.push_back(field.v[i]);
    }
  }

  //---

	//"sort" slice by y-coordinate ( Onlogn )
  sortY(slice);

	//compute distance of each point from its next eleven neighbors ( On )
  double sliceResult = sliceClosest(field, delta);

  /*
  cout << delta << endl;
  cout << k << endl;
  printField(slice);
  */

  double solution = min( sliceResult, delta );
  shortestDistance = solution;

	//return ssolution
	return solution;
}
