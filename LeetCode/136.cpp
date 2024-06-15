#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*

1. A^A=0
2. A^B^A=B
3. (A^A^B) = (B^A^A) = (A^B^A) = B This shows that position doesn't matter.

Similarly , if we see , a^a^a......... (even times) = 0
                        a^a^a......... (odd times) = a

*/

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (auto x : nums)
    {
        ans = ans ^ x;
    }
    return ans;
}

int singleNumber1(vector<int> &nums)
{
    unordered_map<int, int> a;
    for (auto x : nums)
        a[x]++;
    for (auto z : a)
        if (z.second == 1)
            return z.first;
    return -1;
}

int main()
{
    return 0;
}