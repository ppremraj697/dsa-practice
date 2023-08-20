#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for (int i = digits.size() - 1; i >= 0; i--)
        {

            if (i == digits.size() - 1)
            {
                digits[i]++;
            }

            if (digits[i] == 10)
            {
                digits[i] = 0;
                if (i != 0)
                {
                    digits[i - 1]++;
                }
                else
                {
                    digits.push_back(0);
                    digits[i] = 1;
                }
            }
            else
            {
                break;
            }
        }
        return digits;
    }
};

int main()
{
    Solution *soln = new Solution();

    vector<int> arg1 = {1,2,3};
    vector<int> arg2 = {7,9,9};
    vector<int> arg3 = {9,9,9,9};

    vector<int> ans = soln->plusOne(arg1);
    vector<int> ans1 = soln->plusOne(arg2);
    vector<int> ans2 = soln->plusOne(arg3);

    for(int i = 0; i < arg1.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < arg2.size(); i++){
        cout<<ans1[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < arg3.size(); i++){
        cout<<ans2[i]<<" ";
    }
    cout<<endl;
    return 0;
}