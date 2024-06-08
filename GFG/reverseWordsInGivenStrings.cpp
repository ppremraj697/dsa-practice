#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string S)
{
    // code here
    string ans = "";
    string word = "";
    vector<string> temp;

    for (int i = 0; i < S.size(); i++)
    {
        char ch = S[i];
        if (ch == '.')
        {
            temp.push_back(word);
            temp.push_back(".");
            word = "";
        }
        else
        {
            word += S[i];
        }
    }

    if (word != "")
    {
        temp.push_back(word);
    }

    for (int i = temp.size() - 1; i >= 0; i--)
    {
        ans += temp[i];
    }

    return ans;
}

int main()
{
    return 0;
}