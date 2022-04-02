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

    cout << "Test" << endl;

    //COME BACK AND SET THIS UP TO USE THE COMMAND LINE

    //initialize field
    starField field = initializeField("test0.txt");

    // -----

    //print field for testing
    //printField(field);

    // -----

    //call closest points algorithm
    closestPointsAlgorithm(field);

    //return
    return 0;
}
