#include <bits/stdtr1c++.h>
using namespace std;

int countPrimes(int n)
{
    vector<bool> prime(n + 1, true);

    int count = 0;

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p < n; p++)
        if (prime[p])
            count++;

    return count;
}

int main()
{
    return 0;
}