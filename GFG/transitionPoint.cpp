#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n)
{
    // code here
    if (n == 1 && arr[0] == 1)
    {
        return 0;
    }

    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start < end)
    {
        if (arr[mid] == 0)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    return 0;
}