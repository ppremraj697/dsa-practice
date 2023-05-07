#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    int start = 0;
    int end = x;
    long long int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int x;
    cout << "Enter the value of x " << endl;
    cin >> x;

    int sqrt = mySqrt(x);
    cout << "Square Root of " << x << " is " << sqrt << endl;
    return 0;
}