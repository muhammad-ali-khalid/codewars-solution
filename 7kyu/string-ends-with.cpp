/*

Kata can be found at: https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d

*/
#include <string>
bool solution(std::string const &str, std::string const &ending) {
  int length1 = str.length();
  int length2 = ending.length();
  bool result = true;
  int position = 0;
  for(int i = length1 - length2; i < length1; i++){
    if(str[i] != ending[position])
      result = false;
    position++;
  }
  return result;
}
