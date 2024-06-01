/*

Kata can be found at: https://www.codewars.com/kata/5168bb5dfe9a00b126000018

*/
#include <string>
using namespace std; 

string reverseString (string str )
{
  string rev = "";
  int length = str.length();
  for(int i = length - 1; i >= 0; i--){
    rev += str[i];
  }
  return rev;
}
