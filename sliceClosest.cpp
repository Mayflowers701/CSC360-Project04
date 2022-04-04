/*
* FILE: sliceClosest.cpp
* AUTHOR: Eli Madi
* DATE: April 04, 2022
* PURPOSE: Method for calculating the closest two points across the dividing line.
*/

#include <iostream>

#include "starField.hpp"

using namespace std;

//prototype for distance function
double distance(star &a, star &b);

double sliceClosest(starField &slice, double delta, star &A, star &B){

  //track current smallest distance in slice
  double currentMin = delta;

  //for each star in slice
  for(unsigned i = 0; i < slice.v.size(); i++){

    //for the next six points AND only while j is less than slice size
    for(unsigned j = i+1; (j < i+7) && (j < slice.v.size()); j++){

      //if the distance between i and j is less than the current min, update current min
      if( distance( slice.v[i], slice.v[j] ) < currentMin ){

        //update current minimum
        currentMin = distance( slice.v[i], slice.v[j] );

        //update A and B to be these two points
        A = slice.v[i];
        B = slice.v[j];

      }
    }
  }

  return currentMin;
}
