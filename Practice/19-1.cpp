// C++ STL Practice
#include <iostream>
#include <array>
#include <tuple> //for get() method
#include <vector>
#include <cstdlib> //for rand() method
#include <iterator>

using namespace std;



void stlArray()
{
    array<int, 7> arr = {2, 34, 21, 40, 54, 3, 23};
    array<int, 7> arr1 = {23, 4, 1, 43, 5, 38, 3};

    cout << "Element at 3rd index is " << arr.at(3) << endl;
    cout << "Size of the array is " << arr.size() << endl;     // arr.max_size() also returns the same answer
    cout << "Element at 4th index is " << get<4>(arr) << endl; // get() method is overloaded function from class tuple
    cout << "Element at 5th index is " << arr[5] << endl;
    cout << "1st element of the array is " << arr.front() << endl;
    cout << "Last element of the array is " << arr.back() << endl;

    cout << "Elements in arr before swapping" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.swap(arr1); // swap elements of arr and arr1, if size not equal then swapped with 0

    cout << "Elements in arr after swapping" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "arr1 is empty or not--> " << arr1.empty() << endl;

    arr1.fill(10); // fills entire array with particular value
    cout << "arr1 after fill() method" << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}



int main()
{
    // stlArray();
    // stlVectors();
    return 0;
}