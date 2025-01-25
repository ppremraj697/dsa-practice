#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    set<int> s;

    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        s.insert(*it);
    }

    return !(s.size() == nums.size());
}

int main()
{
    return 0;
}