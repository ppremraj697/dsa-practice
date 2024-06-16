#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int n, int arr[])
{
    // Code here
    int currMax = arr[n - 1];
    int i = n - 1;

    vector<int> v;

    while (i >= 0)
    {
        if (arr[i] >= currMax)
        {
            v.insert(v.begin(), arr[i]);
            currMax = arr[i];
        }
        i--;
    }

    return v;
}

int main()
{
    return 0;
}