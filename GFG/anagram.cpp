#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b)
{
    // Your code here
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b ? true : false;
}

int main()
{
    return 0;
}