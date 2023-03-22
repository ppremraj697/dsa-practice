#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

void swapAlternate(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end -= 2;
    }
}

int main()
{
    int size; // max 20
    cout << "Enter the size of the array" << endl;
    cin >> size;

    int arr[20];

    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // int ans1 = sumArray(arr, size);
    // cout << "Sum of all elements of the array is : " << ans1 << endl;

    cout << "Array before swapping is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    swapAlternate(arr, size);
    cout << "\nArray after swapping is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}