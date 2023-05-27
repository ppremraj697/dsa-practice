#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{

    if (n <= 0)
    {
        return false;
    }

    bool ans = n & (n - 1);

    if (!ans)
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    bool ans = isPowerOfTwo(n);

    if (ans)
    {
        cout << n << " is power of 2" << endl;
    }
    else
    {
        cout << n << " is not power of 2" << endl;
    }

    return 0;
}