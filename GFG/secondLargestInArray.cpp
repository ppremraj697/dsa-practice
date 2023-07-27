#include <bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n)
{
    int max = INT_MIN;
    int secondMax = INT_MIN;

    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        if (arr[i] < max && arr[i] >= secondMax)
        {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN)
    {
        return -1;
    }

    return secondMax;
}

int main()
{
    int arr1[6] = {12,35,1,10,34,1};
    int ans1 = print2largest(arr1,6);
    cout<<"Second largest element in arr1 is "<<ans1<<endl;

    int arr2[3] = {5,10,5};
    int ans2 = print2largest(arr2, 3);
    cout<<"Second largest element in arr2 is "<<ans2<<endl;

    int arr3[3] = {2,2,2};
    int ans3 = print2largest(arr3,3);
    cout<<"Second largest element in arr3 is "<<ans3<<endl;
    
    return 0;
}