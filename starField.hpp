#ifndef _STAR_FIELD_HPP_
#define _STAR_FIELD_HPP_

#include <vector>
#include <utility>
#include <string>

//structure for field because using the symbol "vector<pair<string, pair<double, double>>>" got silly
struct starField {
    std::vector<std::pair<std::string, std::pair<double, double>>> v;
};

#endif