/*
* FILE: main.cpp
* AUTHOR: Eli Madi
* DATE: April 04, 2022
* PURPOSE: Main method for CSC36000 Programming Project 04. Calls initializeField and closestPointsAlgorithm using
* arguments from the command line.
*/

#include <iostream>
#include <fstream>

#include "starField.hpp"

using namespace std;

//prototypes
starField initializeField(string fileName);
void closestPointsAlgorithm(starField &field);
void printField(starField field);

//main: opens file, calls initializeField, calls closestPointsAlgorithm
int main(int argc, char* argv[]){

    if(argc != 2){
      cout << "This program accepts only one argument. You passed: " << argc -1 << endl;
      return 0;
    }

    //handle command line input
    string argv1 = argv[1];

    //initialize field
    starField field = initializeField(argv1);

    // -----

    //call closest points algorithm
    closestPointsAlgorithm(field);

    //return
    return 0;
}
