#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    if (haystack.size() == 0 || needle.size() > haystack.size())
    {
        return -1;
    }

    int i = 0, j = 0;
    bool temp = false;
    int flag = -1;

    while (i < haystack.size() && j < needle.size())
    {

        if (haystack[i] != needle[j])
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

    return flag < (haystack.size() - needle.size() + 1) ? flag : -1;
}

int main()
{
    return 0;
}