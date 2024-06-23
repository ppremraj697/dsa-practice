#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> bracketNumbers(string str)
{
    // Your code goes here
    vector<int> v;
    stack<int> st;

    int openCount = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            v.push_back(++openCount);
            st.push(openCount);
        }
        else if (str[i] == ')')
        {
            v.push_back(st.top());
            st.pop();
        }
    }

    return v;
}

int main()
{
    return 0;
}