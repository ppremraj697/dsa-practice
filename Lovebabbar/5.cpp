// #include <iostream>
// #include <cmath>
// #include <string>
#include <bits/stdc++.h>
using namespace std;

int binToDec(string str)
{
    int sum = 0;
    char ch;
    int j = 0;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        ch = str.at(i);
        if (ch == '1')
        {
            sum += pow(2, j);
        }
        j++;
    }
    return sum;
}

int power(int num, int pow)
{
    int a = 1;

    for (int i = 0; i < pow; i++)
    {
        a *= num;
    }
    return a;
}

int main()
{
    string str;
    cout << "Enter a binary string : " << endl;
    cin >> str;

    int ans1 = binToDec(str);
    cout << "The decimal value of binary string is : " << ans1 << endl;

    int a, b;
    cout << "Enter the value of a : " << endl;
    cin >> a;
    cout << "Enter the value of b : " << endl;
    cin >> b;

    int ans2 = power(a, b);
    cout << "a raised to power b is : " << ans2 << endl;

    

    return 0;
}