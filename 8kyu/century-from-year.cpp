/*

Kata can be found at: https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097

*/
int centuryFromYear(int year) 
{
  int century = 0;
  while(year > 0){
  year -= 100;
  century++; 
  }
  return century;
}
