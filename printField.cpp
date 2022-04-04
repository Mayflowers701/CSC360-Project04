/*
* FILE: printField.cpp
* AUTHOR: Eli Madi
* DATE: April 04, 2022
* PURPOSE: Test output for starField.
*
* ELI, DO NOT FORGET TO REMOVE THIS BEFORE YOU TURN THE PROJECT IN!
*/

#include <iostream>

#include "starField.hpp"

using namespace std;

void printField(starField &field){

  for (unsigned i = 0; i < field.v.size(); i++) {
      cout << field.v[i].s.first << " " << field.v[i].s.second.first << " " << field.v[i].s.second.second << endl;
  }
  cout << endl;

  return;

}
