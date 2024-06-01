/*

Kata can be found at: https://www.codewars.com/kata/517abf86da9663f1d2000003

*/
#include <string>
using namespace std;

std::string to_camel_case(std::string text) {
  int length = text.length();
  string str = "";
  for(int i = 0; i < length; i++){
    if (text[i] == '-' || text[i] == '_')
      if(int(text[i+1]) >= 97 && int(text[i+1] <= 122))
        text[i+1] = text[i+1] - 32;
    if (text[i] != '-' && text[i] != '_')
      str += text[i];
  }
  return str;
}
