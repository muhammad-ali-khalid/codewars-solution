/*

Kata can be found at: https://www.codewars.com/kata/5287e858c6b5a9678200083c

*/
#include <cmath>
#include <string>
using namespace std;
int numberOfDigits(int number)
{
    string str = to_string(number);
    cout << str << endl;
    return str.length();
}
bool narcissistic(int value)
{
    int sum = 0, number = value;
    int digits = numberOfDigits(value);
    bool result = false;
    while (value > 0)
    {
        sum += pow((value % 10), digits);
        value /= 10;
    }
    if (sum == number)
        result = true;
    return result;
}
