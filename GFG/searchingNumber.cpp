#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {9, 7, 2, 16, 4};
    int ans = search(arr, 5, 16);

    if (ans > 0)
    {
        cout << "Element is present at " << ans << " position in the array " << endl;
    }
    else
    {
        cout << "Element is not present in the array " << endl;
    }

    return 0;
}