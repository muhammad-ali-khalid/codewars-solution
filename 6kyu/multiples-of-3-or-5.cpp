/*

Kata can be found at: https://www.codewars.com/kata/514b92a657cdc65150000006

*/
int solution(int number) 
{
  int sum = 0;
  if(number < 0)
    return 0;
  else{
    for(int i = 1; i < number; i++){
      if(i % 3 == 0 || i % 5 == 0)
        sum += i;
    }
  }
  return sum;
}
