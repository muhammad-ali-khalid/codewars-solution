/*

Kata can be found at: https://www.codewars.com/kata/5ab6538b379d20ad880000ab

*/
int area_or_perimeter(int l , int w) {
  if (l == w){
    return l*l;
  }
  else
    return (2*(l+w));
}
