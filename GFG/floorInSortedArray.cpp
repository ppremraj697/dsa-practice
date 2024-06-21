#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<long long> v, long long n, long long x)
{
    // Your code here
    if (x >= v[n - 1])
    {
        return n - 1;
    }

    long long start = 0;
    long long end = n - 1;
    long long mid = start + (end - start) / 2;
    long long ans = -1;

    while (start <= end)
    {
        if (v[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    return 0;
}