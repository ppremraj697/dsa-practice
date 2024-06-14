#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v, int size)
{
    cout << "Printing vector ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void stlVectors()
{
    vector<int> v;
    for (int i = 34; i > 25; i--)
    {
        v.push_back(rand() % 10); // rand() generates random numbers
    }
    printVector(v, v.size());

    vector<int>::iterator itr = v.begin(); // Returns an iterator pointing to the first element in the vector
    vector<int>::iterator itr1 = v.end();  // Returns an iterator pointing to the theoretical element that follows the last element in the vector
    auto itr2 = v.rbegin();                // Returns a reverse iterator pointing to the last element in the vector. It moves from last to first element
    auto itr3 = v.rend();                  // Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector

    cout << "Value at *itr is " << *itr << " and its address is " << &itr << endl;
    cout << "Value at *itr1 is " << *itr1 << " and its address is " << &itr1 << endl;
    cout << "Value at *itr2 is " << *itr2 << " and its address is " << &itr2 << endl;
    cout << "Value at *itr3 is " << *itr3 << " and its address is " << &itr3 << endl; // Garbage value

    itr++;
    itr2++;
    cout << "New Value to which itr is pointing is " << *itr << endl;
    cout << "New Value to which itr2 is pointing is " << *itr2 << endl;

    cout << "Size of the vector v is " << v.size() << endl;
    cout << "Capacity of the vector v is " << v.capacity() << endl; // size of the storage space currently allocated to the vector expressed as number of elements
    cout << "Maximum numbers a vector v can hold is " << v.max_size() << endl;
    v.resize(7);
    cout << "Size of vector after resizing is " << v.size() << endl;
    v.shrink_to_fit();
    cout << "Capacity after shrinking vector is " << v.capacity() << endl;
    v.reserve(20);
    cout << "Reserved capacity of the vector is " << v.capacity() << endl;
    cout << "Vector is empty or not " << v.empty() << endl;

    cout << "Element at 3rd index is " << v[3] << endl;
    cout << "Element at 3rd index is " << v.at(3) << endl;
    cout << "element in front is " << v.front() << endl;
    cout << "Element at back is " << v.back() << endl;
    cout << "Pointer to first element is " << v.data() << endl;

    printVector(v, v.size());
    v.assign(3, 100); // fill the vector with 100 3 times
    printVector(v, v.size());

    v.push_back(433);
    cout << "Element at the back is after push_back() " << v.back() << endl;
    v.pop_back();
    cout << "Element at the back is after pop_back() " << v.back() << endl;

    v.insert(v.end(), 298); // insert 298 at index before the specified location i.e, v.end()-1
    printVector(v, v.size());

    v.erase(v.begin(), v.begin() + 2); // erases elements of vector in specified range
    printVector(v, v.size());

    // v.swap(v1); swaps elements of v and v1
    v.emplace(v.begin(), 454); // insert 454 at index 3
    v.emplace_back(123);       // insert element at the back of the vector
    printVector(v, v.size());
}

int main()
{
    stlVectors();
    return 0;
}