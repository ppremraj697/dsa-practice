#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
    // Your code here
    if (n == 1)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0 && arr[i] >= arr[i + 1])
        {
            return i;
        }

        if (i == n - 1 && arr[i] > arr[i - 1])
        {
            return i;
        }

        if (arr[i] > arr[i - 1] && arr[i] >= arr[i + 1])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    return 0;
}