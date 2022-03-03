// define some operators

#include <Rcpp.h>
using namespace Rcpp;

#include "decimal.h"
using namespace dec;


decimal<10> read_decimal(std::string s) {
  decimal<10> d = fromString<decimal<10>>(s); 
  return d; 
}


// [[Rcpp::export]]
CharacterVector decimal_add(std::vector<std::string> a1, std::vector<std::string> a2){
  // TODO: use information from the S3 class to determine the precision
  // std::cout << a1 << std::endl;
  CharacterVector vec(a1.size());
  
  for (size_t i = 0; i < a1.size(); i++) {
    auto b1 = read_decimal(a1[i]);
    auto b2 = read_decimal(a2[i]);

    vec[i] = toString(b1 + b2);
  }
  return vec;
}

// [[Rcpp::export]]
CharacterVector decimal_minus(std::vector<std::string> a1, std::vector<std::string> a2){
  // TODO: use information from the S3 class to determine the precision
  CharacterVector vec(a1.size());
  
  for (size_t i = 0; i < a1.size(); i++) {
    auto b1 = read_decimal(a1[i]);
    auto b2 = read_decimal(a2[i]);
    
    vec[i] = toString(b1 - b2);
  }
  return vec;
}

// [[Rcpp::export]]
CharacterVector decimal_multiply(std::vector<std::string> a1, std::vector<std::string> a2){
  // TODO: use information from the S3 class to determine the precision
  CharacterVector vec(a1.size());
  
  for (size_t i = 0; i < a1.size(); i++) {
    auto b1 = read_decimal(a1[i]);
    auto b2 = read_decimal(a2[i]);
    
    vec[i] = toString(b1 * b2);
  }
  return vec;
}

// [[Rcpp::export]]
CharacterVector decimal_divide(std::vector<std::string> a1, std::vector<std::string> a2){
  // TODO: use information from the S3 class to determine the precision
  CharacterVector vec(a1.size());
  
  for (size_t i = 0; i < a1.size(); i++) {
    auto b1 = read_decimal(a1[i]);
    auto b2 = read_decimal(a2[i]);
    
    vec[i] = toString(b1 / b2);
  }
  return vec;
}

// [[Rcpp::export]]
LogicalVector decimal_equal(std::vector<std::string> a1, std::vector<std::string> a2) {
  LogicalVector vec(a1.size());
  
  for (size_t i = 0; i < a1.size(); i++) {
    auto b1 = read_decimal(a1[i]);
    auto b2 = read_decimal(a2[i]);
    
    vec[i] = b1 == b2;
  }
  return vec;
}

// [[Rcpp::export]]
LogicalVector decimal_notequal(std::vector<std::string> a1, std::vector<std::string> a2) {
  LogicalVector vec(a1.size());
  
  for (size_t i = 0; i < a1.size(); i++) {
    auto b1 = read_decimal(a1[i]);
    auto b2 = read_decimal(a2[i]);
    
    vec[i] = b1 != b2;
  }
  return vec;
}

// [[Rcpp::export]]
LogicalVector decimal_lessequal(std::vector<std::string> a1, std::vector<std::string> a2) {
  LogicalVector vec(a1.size());
  
  for (size_t i = 0; i < a1.size(); i++) {
    auto b1 = read_decimal(a1[i]);
    auto b2 = read_decimal(a2[i]);
    
    vec[i] = b1 <= b2;
  }
  return vec;
}

// [[Rcpp::export]]
LogicalVector decimal_greaterequal(std::vector<std::string> a1, std::vector<std::string> a2) {
  LogicalVector vec(a1.size());
  
  for (size_t i = 0; i < a1.size(); i++) {
    auto b1 = read_decimal(a1[i]);
    auto b2 = read_decimal(a2[i]);
    
    vec[i] = b1 >= b2;
  }
  return vec;
}

// [[Rcpp::export]]
LogicalVector decimal_greater(std::vector<std::string> a1, std::vector<std::string> a2) {
  LogicalVector vec(a1.size());
  
  for (size_t i = 0; i < a1.size(); i++) {
    auto b1 = read_decimal(a1[i]);
    auto b2 = read_decimal(a2[i]);
    
    vec[i] = b1 > b2;
  }
  return vec;
}

// [[Rcpp::export]]
LogicalVector decimal_less(std::vector<std::string> a1, std::vector<std::string> a2) {
  LogicalVector vec(a1.size());
  
  for (size_t i = 0; i < a1.size(); i++) {
    auto b1 = read_decimal(a1[i]);
    auto b2 = read_decimal(a2[i]);
    
    vec[i] = b1 < b2;
  }
  return vec;
}