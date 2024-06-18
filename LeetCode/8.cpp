#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    int i = 0;
    char space = ' ';
    while (s[i] == space)
    {
        i++;
    }

    char sign = ' ';
    if (s[i] == '-' || s[i] == '+')
    {
        sign = s[i];
        i++;
    }

    long int ans = 0;

    while (s[i] >= 48 && s[i] <= 57)
    {
        if (ans >= INT_MAX)
        {
            break;
        }
        ans = 10 * ans + (int)(s[i] - 48);
        i++;
    }

    if (sign == '-')
    {
        ans = -ans;
    }

    if (ans >= INT_MAX)
    {
        return INT_MAX;
    }
    else if (ans <= INT_MIN)
    {
        return INT_MIN;
    }

    return ans;
}

int main()
{
    return 0;
}