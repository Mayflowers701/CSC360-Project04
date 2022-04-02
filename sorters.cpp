#include <string>
#include <algorithm>

#include "starField.hpp"

using namespace std;

//custom comparators for use by std::sort
bool compX(star &a, star &b){

	return a.s.second.first < b.s.second.first;
}

bool compY(star &a, star &b){

	return a.s.second.second < b.s.second.second;
}

//sort field by x values
void sortX(starField &field) {

	sort(field.v.begin(), field.v.end(), compX);

	return;
}


//sort field by y values
void sortY(starField &field) {

	sort(field.v.begin(), field.v.end(), compY);

	return;
}
