#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 0 <= N <= 18
long long int factorial(int N)
{
    // code here
    long long int ans = 1;

    while (N)
    {
        ans *= N;
        N--;
    }
    return ans;
}

int main()
{
    return 0;
}