#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{
    int currElem = a[0];
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (count == 0)
            currElem = a[i];

        if (currElem == a[i])
            count++;
        else
            count--;
    }

    int finalCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (currElem == a[i])
            finalCount++;
    }

    return finalCount > size / 2 ? currElem : -1;
}

int main()
{
    return 0;
}