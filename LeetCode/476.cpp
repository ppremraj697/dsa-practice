#include <bits/stdc++.h>
using namespace std;

int findComplement(int num)
{
    int sum = 0, i = 0;

    if (num == 0)
    {
        return 1;
    }

    while (num)
    {
        int bit = num & 1;
        if (bit == 0)
        {
            sum += pow(2, i);
        }
        num = num >> 1;
        i++;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int ans = findComplement(n);
    cout << "Complement of " << n << " to the base 10 is " << ans << endl;
    return 0;
}