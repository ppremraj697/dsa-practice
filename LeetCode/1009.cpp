#include <bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n)
{
    int sum = 0;
    int i = 0;
    while (n)
    {
        int bit = n & 1;
        if (bit == 0)
        {
            sum += pow(2, i);
        }
        n = n >> 1;
        i++;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    int ans1 = bitwiseComplement(n);
    cout << "Complement to the base 10 is : " << ans1 << endl;

    return 0;
}