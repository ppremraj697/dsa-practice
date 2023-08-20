#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstOccurence(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        long long int mid = start + (end - start) / 2;

        int ans = -1;

        while (start <= end)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                end = mid - 1;
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

        return ans;
    }

    int lastOccurence(vector<int> &nums, int target)
    {

        int start = 0;
        int end = nums.size() - 1;
        long long int mid = start + (end - start) / 2;

        int ans = -1;

        while (start <= end)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                start = mid + 1;
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

        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {

        vector<int> ans(2, -1);

        ans[0] = firstOccurence(nums, target);
        ans[1] = lastOccurence(nums, target);

        return ans;
    }
};

int main()
{
    vector<int> arr = {5,7,7,8,8,10};

    Solution soln;

    vector<int> ans = soln.searchRange(arr, 8);
    vector<int> ans1 = soln.searchRange(arr, 9);
    vector<int> ans2 = soln.searchRange(arr, 10);

    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;

    cout<<ans1[0]<<endl;
    cout<<ans1[1]<<endl;

    cout<<ans2[0]<<endl;
    cout<<ans2[1]<<endl;

    return 0;
}