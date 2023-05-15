#include <bits/stdc++.h>
using namespace std;

int countZeroes(int arr[], int n)
{
    int start = 0;
    int end = n;

    int mid = start + (end - start) / 2;

    int index = -1;

    while (start <= end)
    {
        if (arr[mid] == 0)
        {
            index = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return n - index;
}

int main()
{
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int ans = countZeroes(arr, 12);

    cout << "Number of zeroes in the given sorted array of 0's and 1's is " << ans << endl;

    return 0;
}