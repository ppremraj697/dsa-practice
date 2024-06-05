/*
Input => "aabccabba"
Output => 3

Input => "ca"
Output => 2

Steps of Algorithm:
1. form a prefix from input string containing same characters
2. form a suffix from input string containing same characters
3. prefix and suffix should contains same character
4. remove prefix and suffix from input string
5. repeat 1 to 4 until possible
6. return length of remaining string
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int algoImplementation(string str)
{
    if (str[0] == str[str.size() - 1])
    {
        char ch = str[0];
        while (ch == str[0])
        {
            str.erase(str.begin());
        }
        while (ch == str[str.size() - 1])
        {
            str.erase(str.end() - 1);
        }

        if (str[0] == str[str.size() - 1])
        {
            int newLen = algoImplementation(str);
            return newLen;
        }
        else
        {
            return str.size();
        }
    }
    else
    {
        return str.size();
    }
}

int main()
{
    string str = "aabccabba";
    int ans = algoImplementation(str);
    cout << ans << endl;
    return 0;
}