#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findNumbers(vector<int> &nums)
{
    int finalCount = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        while (nums[i])
        {
            nums[i] = nums[i] / 10;
            count++;
        }

        if (count % 2 == 0)
        {
            finalCount++;
        }
    }

    return finalCount;
}

int main()
{
    return 0;
}