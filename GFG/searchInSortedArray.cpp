#include <bits/stdc++.h>
using namespace std;

int searchInSorted(int arr[], int N, int K)
{
    int start = 0;
    int end = N;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == K)
        {
            return 1;
        }
        else if (arr[mid] > K)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    int ans = searchInSorted(arr, 5, 8);
    if (ans == 1)
    {
        cout << "Element is present in the array" << endl;
    }
    else
    {
        cout << "Element is not present in the array " << endl;
    }
    return 0;
}