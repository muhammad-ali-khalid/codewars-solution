/*

Kata can be found at: https://www.codewars.com/kata/55a70521798b14d4750000a4/train/cpp

*/
#include <string>
using namespace std;
std::string greet(const std::string& n){
  string str1 = "Hello, ";
  str1 += n;
  str1 += " how are you doing today?";
  return str1;
}
