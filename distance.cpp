#include <iostream>
#include <math.h>
#include "starField.hpp"

using namespace std;

double distance(star &a, star &b){

  //x and y for star a
  double xa = a.s.second.first;
  double ya = a.s.second.second;

  //x and y for star b
  double xb = b.s.second.first;
  double yb = b.s.second.second;

  //return square root ( (xa - xb)^2 + (ya - yb)^2 )
  return sqrt( pow( xa - xb, 2 ) + pow( ya - yb, 2) );
}
