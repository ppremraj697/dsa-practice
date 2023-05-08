#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int sumElements = 0;
    int sumIndex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sumElements += nums[i];
    }
    for (int i = 1; i <= nums.size(); i++)
    {
        sumIndex += i;
    }

    return sumIndex - sumElements;
}

int main()
{
    vector<int> v = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int ans = missingNumber(v);
    cout << "Missing number in the given vector is " << ans << endl;
    return 0;
}