#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string modify(string s)
{
    // code here.
    char ch = ' ';
    int i = 0;
    while (i < s.size())
    {
        if (ch == s[i])
        {
            s.erase(s.begin() + i);
        }
        else
        {
            i++;
        }
    }
    return s;
}

int main()
{
    return 0;
}