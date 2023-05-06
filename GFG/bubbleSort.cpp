#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
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

    bubbleSort(arr, 10);

    cout << "\nArray after sorting is " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}