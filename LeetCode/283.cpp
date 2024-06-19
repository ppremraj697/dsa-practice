#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int i = 0;
    int count = 0;

    while (i < nums.size())
    {
        if (nums[i] == 0)
        {
            nums.erase(nums.begin() + i);
            count++;
            continue;
        }
        i++;
    }

    while (count)
    {
        nums.push_back(0);
        count--;
    }
}

int main()
{
    return 0;
}