#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
    // Your code here
    if (x.size() == 1)
    {
        return false;
    }

    stack<char> st;

    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == '[' || x[i] == '(' || x[i] == '{')
        {
            st.push(x[i]);
        }
        else if (!st.empty() && (x[i] == ']' || x[i] == ')' || x[i] == '}'))
        {
            char top = st.top();
            if ((top == '[' && x[i] == ']') || (top == '(' && x[i] == ')') || (top == '{' && x[i] == '}'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }

    return st.empty() ? true : false;
}

int main()
{

    return 0;
}