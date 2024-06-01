/*

Kata can be found at: https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7

*/
#include <string>
using namespace std;
std::string makeUpperCase (const std::string& input_str)
{
  string str = "";
  int length = input_str.length();
  for(int i = 0; i < length; i++){
    str += toupper(input_str[i]);
  }
  return str;
}
