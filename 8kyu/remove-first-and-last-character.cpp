/*

Kata can be found at: https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0

*/
#include <string>

using namespace std; 

string sliceString (string str )
{
  string str1 = "";
  int length = str.length();
  for(int i = 0; i < length; i++){
    if(i != 0 && i != length - 1)
      str1 += str[i];
  }
  return str1; 
}
