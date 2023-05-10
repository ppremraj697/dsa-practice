#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int firstOccurence = -1;

    while (start <= end)
    {
        if (arr[mid] == x)
        {
            firstOccurence = mid;
            end = mid - 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return firstOccurence;
}

int lastOccurence(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int lastOccurence = -1;

    while (start <= end)
    {
        if (arr[mid] == x)
        {
            lastOccurence = mid;
            start = mid + 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return lastOccurence;
}

vector<int> find(int arr[], int n, int x)
{
    vector<int> v;
    v.push_back(firstOccurence(arr, n, x));
    v.push_back(lastOccurence(arr, n, x));

    return v;
}

int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};

    vector<int> v = find(arr, 9, 5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}