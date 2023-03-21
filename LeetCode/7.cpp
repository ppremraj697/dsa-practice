#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int sum = 0;

    while (x)
    {
        int digit = x % 10;
        if ((sum > INT_MAX / 10) || (sum < INT_MIN / 10))
        {
            return 0;
        }
        sum = sum * 10 + digit;
        x = x / 10;
    }

    return sum;
}

int main()
{
    int num;
    cout << "Enter value of number " << endl;
    cin >> num;

    int ans = reverse(num);
    cout << "The reversed integer is " << ans << endl;

    return 0;
}