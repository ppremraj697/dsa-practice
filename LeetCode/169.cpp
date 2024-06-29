#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int count = 0;
    int currElem = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
            currElem = nums[i];

        if (nums[i] == currElem)
            count++;
        else
            count--;
    }

    int finalCount = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == currElem)
            finalCount++;
    }

    return finalCount > nums.size() / 2 ? currElem : -1;
}

int main()
{
    return 0;
}