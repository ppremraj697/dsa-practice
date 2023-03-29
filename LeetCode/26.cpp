#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int count = 0;
    int i = 0;
    int j = 1;

    if (nums.size() == 1)
    {
        return 1;
    }

    while (i < nums.size() && j < nums.size())
    {
        if (nums[i] == nums[j])
        {
            nums[j] = 200;
            j++;
        }
        else
        {
            i = j;
            j++;
        }
    }

    sort(nums.begin(), nums.end());

    int k = 0;
    while ((k < nums.size()) && (nums[k] != 200))
    {
        k++;
        count++;
    }
    return count;
}

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int ans = removeDuplicates(nums);
    cout << "Answer is " << ans << endl;
    return 0;
}