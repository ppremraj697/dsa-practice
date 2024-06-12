#include <bits/stdc++.h>
using namespace std;

int sqrt1(int x)
{
    // BrutForce1
    int ans1 = -1;
    for (int i = 0; i <= x; i++)
    {
        if (i * i <= x)
        {
            ans1 = i;
        }
        else
        {
            break;
        }
    }
    return ans1;
}

int sqrt2(int x)
{
    // BinarySearch
    int start = 0;
    int end = x;
    long long int mid = start + (end - start) / 2;
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
    cout << "Enter value of n " << endl;
    cin >> n;
    int ans1 = sqrt1(n);
    cout << "Square root of " << n << " is " << ans1 << endl;
    
    int ans2 = sqrt2(n);
    cout << "Square root of " << n << " is " << ans2 << endl;

    return 0;
}