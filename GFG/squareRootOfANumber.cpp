#include <bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x)
{
    long long int start = 0;
    int long long end = x;
    int long long mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the positive value of n " << endl;
    cin >> n;

    long long int ans = floorSqrt(n);
    cout << "Floor value of square root of " << n << " is " << ans << endl;
    return 0;
}