#include <bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    bool ans = arraySortedOrNot(arr, 5);

    if (ans)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Array is not sorted " << endl;
    }
    return 0;
}