// define some functions

#include <Rcpp.h>
using namespace Rcpp;

#include "utils.h"

// [[Rcpp::export]]
std::string sum_decimal_cpp(std::vector<std::string> s) {
  
  decimal<10> out;
  
  for (size_t i = 0; i < s.size(); i++) {
    auto t = read_decimal(s[i]);
    out += t;
  }
  return toString(out);
}