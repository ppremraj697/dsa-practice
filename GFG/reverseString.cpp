#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWord(string str)
    {
        // Your code goes here
        string ans = "";

        for (int i = str.length() - 1, j = 0; i >= 0, j < str.length(); i--, j++)
        {
            ans += str[i];
        }

        return ans;
    }
};

int main()
{
    return 0;
}