#include <bits/stdc++.h>
using namespace std;

int MissingNumber(int array[], int n)
{
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        sum1 += array[i];
    }
    for (int i = 1; i <= n; i++)
    {
        sum2 += i;
    }

    return sum2 - sum1;
}

int main()
{
    int arr[] = {6, 1, 2, 8, 3, 4, 7, 10, 5};
    int ans = MissingNumber(arr, 10);
    cout << "Missing number in the given array is " << ans << endl;
    return 0;
}