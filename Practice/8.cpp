#include <bits/stdc++.h>
using namespace std;

int ap(int num)
{
    int nthTerm = (3 * num) + 7;
    return nthTerm;
}

int setBits(int n1, int n2)
{
    int count = 0;
    while (n1 || n2)
    {
        int bit1 = n1 & 1;
        int bit2 = n2 & 1;

        if (bit1 == 1)
        {
            count++;
        }
        if (bit2 == 1)
        {
            count++;
        }
        n1 = n1 >> 1;
        n2 = n2 >> 1;
    }
    return count;
}

int nthFibNo(int n)
{
    int a = 0, b = 1;
    int fibno;

    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }

    for (int i = 0; i < n - 2; i++)
    {
        fibno = a + b;
        a = b;
        b = fibno;
    }

    return fibno;
}

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    int ans1 = ap(n);
    cout << "nth term of given AP is : " << ans1 << endl;

    int a, b;
    cout << "Enter the value of a : " << endl;
    cin >> a;
    cout << "Enter the value of b : " << endl;
    cin >> b;

    int ans2 = setBits(a, b);
    cout << "Total number of set bits in a and b is : " << ans2 << endl;

    int num;
    cout << "Enter the value of num : " << endl;
    cin >> num;

    int ans3 = nthFibNo(num);
    cout << num << "th Fibonacci number is : " << nthFibNo(num) << endl;

    return 0;
}