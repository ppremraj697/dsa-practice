#include <bits/stdc++.h>
using namespace std;

bool isArraySpecial(vector<int> &nums)
{
    if (nums.size() == 1)
        return true;

    int size = nums.size();

    for (int i = 0; i < size - 1; i++)
    {
        int rem1 = nums[i] % 2;
        int rem2 = nums[i + 1] % 2;
        if ((rem1 && rem2) || (!rem1 && !rem2))
            return false;
    }

    return true;
}

int main()
{
    return 0;
}