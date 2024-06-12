// Learning => The sizeof operator in C++ gives the size of the type of the object in bytes, not the size of the content or the number of elements.

// Input => My.name.is.Premraj
// Output => Premraj.is.name.My

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseWordsOfString(string str)
{
    string ans = "";
    string word = "";
    vector<string> temp;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '.')
        {
            temp.push_back(word);
            temp.push_back(".");
            word = "";
        }
        else
        {
            word += str[i];
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
    cout << "Enter a string" << endl;
    string str;
    cin >> str;

    string ans = reverseWordsOfString(str);
    cout << "String after reversing words: " << ans << endl;

    return 0;
}