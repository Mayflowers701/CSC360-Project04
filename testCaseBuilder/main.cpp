#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){

  ofstream writer("test1.txt");

  int count = 1000;
  writer << count << endl;

  writer << "obj" << 1 << " " << 50 << " " << 75 << endl;
  writer << "obj" << 2 << " " << 50.5 << " " << 75 << endl;

  for(int i = 2; i < count; i++){
    writer << "obj" << i+1 << " " << rand() % 1000000 << " " << rand() % 1000000 << endl;
  }

  writer.close();
  writer.open("test2.txt");

  count = 10000;
  writer << count << endl;

  for(int i = 0; i < count; i++){
    writer << "obj" << i+1 << " " << rand() % 1000000 << " " << rand() % 1000000 << endl;
  }

  writer.close();
  writer.open("test3.txt");

  count = 1000000;
  writer << count << endl;

  for(int i = 0; i < count; i++){
    writer << "obj" << i+1 << " " << rand() % 1000000 << " " << rand() % 1000000 << endl;
  }


  return 0;
}
