#include <bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n)
{
    if (n <= 0)
        return false;
    double logResult = log10(n) / log10(3);
    return floor(logResult) == logResult;
}

int main()
{
    return 0;
}