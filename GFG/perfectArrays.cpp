#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPerfect(int n, vector<int> &arr)
{
    // code here
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main()
{
    return 0;
}