#include <bits/stdc++.h>
using namespace std;

int select(int arr[], int i, int n)
{
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[i])
        {
            i = j;
        }
    }

    return i;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ansIndex = select(arr, i, n);
        swap(arr[i], arr[ansIndex]);
    }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << "Array before sorting is " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    selectionSort(arr, 10);

    cout << "\nArray after sorting is " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}