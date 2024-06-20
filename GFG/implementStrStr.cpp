#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int strstr(string s, string x)
{
    // Your code here
    if (s.size() == 0 || x.size() > s.size())
        return -1;

    int i = 0, j = 0;
    bool temp = false;
    int flag = -1;

    while (i < s.size() && j < x.size())
    {
        if (s[i] != x[j])
        {
            if (temp == true)
            {
                temp = false;
                i = flag + 1;
                flag = -1;
                j = 0;
            }
            else
            {
                i++;
            }
        }
        else
        {
            if (temp == false)
            {
                temp = true;
                flag = i;
            }
            i++;
            j++;
        }
    }

    return flag < (s.size() - x.size() + 1) ? flag : -1;
}

int main()
{
    return 0;
}