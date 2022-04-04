/*
* FILE: starField.cpp
* AUTHOR: Eli Madi
* DATE: April 04, 2022
* PURPOSE: Header file for describing structures star and starField. These classes are really just a layer of
* indirection for "std::vector<std::pair<std::string, std::pair<double, double>>>", but using that symbol
* everywhere made this project nigh unreadable.
*/

#ifndef _STAR_FIELD_HPP_
#define _STAR_FIELD_HPP_

#include <vector>
#include <utility>
#include <string>

//star class
class star {
public:
  std::pair<std::string, std::pair<double, double> > s;
};

//star field class
class starField {
public:
  std::vector<star> v;
};

#endif
