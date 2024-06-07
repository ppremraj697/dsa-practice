// Input => My.name.is.Premraj.Patil
// Output => My.xyz.is.xyz.Patil

// Input => My.name.is.Premraj.Rajendra.Patil
// Output => My.xyz.is.xyz.Rajendra.xyz

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void replaceAlternateWord(string str)
{
    string word = "";
    string ans = "";
    bool flag = false;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '.')
        {
            word += str[i];
        }
        else
        {
            if (flag == false)
            {
                ans += word;
                ans += ".";
                flag = true;
                word = "";
            }
            else
            {
                ans += "xyz.";
                flag = false;
                word = "";
            }
        }
    }

    if (word != "")
    {
        if (flag)
        {
            ans += "xyz";
            flag = false;
            word = "";
        }
        else
        {
            ans += word;
            word = "";
        }
    }
    cout << ans << endl;
}

int main()
{
    string str = "My.name.is.Premraj.Rajendra.Patil";
    string str1 = "My.name.is.Premraj.Patil";
    replaceAlternateWord(str);
    replaceAlternateWord(str1);

    return 0;
}