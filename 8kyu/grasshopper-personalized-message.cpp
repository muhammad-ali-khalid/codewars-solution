/*

Kata can be found at: https://www.codewars.com/kata/5772da22b89313a4d50012f7

*/
#include <string>

std::string greet(const std::string& name, const std::string& owner) {
  if(name == owner)
    return "Hello boss";
  else
    return "Hello guest";
}
