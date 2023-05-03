#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int ans = binarysearch(arr, 5, 4);
    int ans1 = binarysearch(arr, 5, 67);
    cout << "Key 4 is found at index " << ans << endl;
    cout << "Key 67 is found at index " << ans1 << endl;
    return 0;
}