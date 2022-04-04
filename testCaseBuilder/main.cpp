#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){

  ofstream writer("test1.txt");

  int count = 1000;
  writer << count << endl;

  for(int i = 0; i < count; i++){
    writer << "obj" << i+1 << " " << i << " " << i << endl;
  }

  writer.close();
  writer.open("test2.txt");

  count = 10000;
  writer << count << endl;

  for(int i = 0; i < count; i++){
    writer << "obj" << i+1 << " " << i << " " << i << endl;
  }

  writer.close();
  writer.open("test3.txt");

  count = 1000000;
  writer << count << endl;

  for(int i = 0; i < count; i++){
    writer << "obj" << i+1 << " " << i << " " << i << endl;
  }


  return 0;
}
