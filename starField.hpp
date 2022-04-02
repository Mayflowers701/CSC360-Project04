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
