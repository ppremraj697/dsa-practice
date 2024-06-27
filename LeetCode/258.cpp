#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int addDigits(int num)
{
    if (num == 0)
        return num;

    int sum = 0;

    while (num)
    {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    if (sum >= 10)
    {
        int newSum = addDigits(sum);
        return newSum;
    }

    return sum;

    // return num % 9 == 0 ? 9 : num % 9; --> Constant time complexity
}

int main()
{
    return 0;
}