#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int f0 = 0;
    int f1 = 1;

    int nextFib;

    if (n == 0)
    {
        return f0;
    }
    else if (n == 1)
    {
        return f1;
    }

    for (int i = 1; i < n; i++)
    {
        nextFib = f0 + f1;
        f0 = f1;
        f1 = nextFib;
    }

    return nextFib;
}

int main()
{
    int n;
    cout << "Enter value of n" << endl;
    cin >> n;

    int ans = fib(n);
    cout << "nth Fibonacci number is " << ans << endl;

    return 0;
}