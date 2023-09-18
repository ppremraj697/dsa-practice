#include <bits/stdc++.h>
using namespace std;

bool isPowerofTwo(long long n)
{
    if (n == 0)
    {
        return false;
    }

    int bit = n & (n - 1);

    if (bit)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    return 0;
}