/*

Kata can be found at: https://www.codewars.com/kata/5262119038c0985a5b00029f

*/
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;       
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}
