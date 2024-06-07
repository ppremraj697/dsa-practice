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
    if (str.size() <= 1 || str[0] != str[str.size() - 1])
    {
        return str.size();
    }

    char ch = str[0];
    while (str.size() != 0 && ch == str[0])
    {
        str.erase(str.begin());
    }
    while (str.size() != 0 && ch == str[str.size() - 1])
    {
        str.erase(str.end() - 1);
    }

    int newLen = algoImplementation(str);
    return newLen;
}

int main()
{
    // string str = "aabccabba"; // 3
    string str = "abccba"; // 0
    // string str = "abcba";     // 1
    // string str = "bccabb";    // 3
    // string str = "ca";        // 2
    // string str = "";        // 0

    int ans = algoImplementation(str);
    cout << ans << endl;
    return 0;
}