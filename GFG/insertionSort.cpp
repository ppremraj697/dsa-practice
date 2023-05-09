#include <bits/stdc++.h>
using namespace std;

void insert(int arr[], int i)
{
    int temp = arr[i];
    for (; i > 0; i--)
    {
        if (arr[i - 1] > temp)
        {
            arr[i] = arr[i - 1];
        }
        else
        {
            break;
        }
    }
    arr[i] = temp;
}

// Function to sort the array using insertion sort algorithm.
void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        insert(arr, j);
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

    insertionSort(arr, 10);

    cout << "\nArray after sorting is " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}