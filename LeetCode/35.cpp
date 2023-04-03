#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}

int main()
{

    vector<int> nums = {1, 3, 5, 6};
    int target;
    cout << "Enter the value whose index we have to find" << endl;
    cin >> target;
    int ans = searchInsert(nums, target);
    cout << "Index of the target is : " << ans << endl;

    return 0;
}