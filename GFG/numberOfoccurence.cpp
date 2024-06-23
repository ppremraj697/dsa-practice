#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastOccurence(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == x)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int count(int arr[], int n, int x)
{
    // code here
    int firstIndex = firstOccurence(arr, n, x);
    int lastIndex = lastOccurence(arr, n, x);

    if (firstIndex == -1 && lastIndex == -1)
        return 0;

    return lastIndex - firstIndex + 1;
}

int main()
{
    return 0;
}