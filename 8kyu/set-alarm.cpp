/*

Kata can be found at: https://www.codewars.com/kata/568dcc3c7f12767a62000038

*/
bool set_alarm(const bool& employed,const bool& vacation){
  if (employed == false)
    return false;
  else if (vacation == true)
    return false;
  else
    return true;
}
