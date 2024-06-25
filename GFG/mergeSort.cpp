#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int leftPtr = l;
    int rightPtr = m + 1;

    vector<int> v;

    while (leftPtr <= m && rightPtr <= r)
    {
        if (arr[leftPtr] <= arr[rightPtr])
        {
            v.push_back(arr[leftPtr]);
            leftPtr++;
        }
        else
        {
            v.push_back(arr[rightPtr]);
            rightPtr++;
        }
    }

    while (leftPtr <= m)
    {
        v.push_back(arr[leftPtr]);
        leftPtr++;
    }

    while (rightPtr <= r)
    {
        v.push_back(arr[rightPtr]);
        rightPtr++;
    }

    for (int i = l; i <= r; i++)
    {
        arr[i] = v[i - l];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;

    int mid = l + (r - l) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{
    return 0;
}