
#ifndef decimal__utils__
#define decimal__utils__

#include "decimal.h"
using namespace dec;

inline decimal<10> read_decimal(std::string s) {
  decimal<10> d = fromString<decimal<10>>(s); 
  return d; 
}

#endif // decimal__utils__