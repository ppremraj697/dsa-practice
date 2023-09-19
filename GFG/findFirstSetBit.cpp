#include <bits/stdc++.h>
using namespace std;

unsigned int getFirstSetBit(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int count = 1;

    while (n)
    {
        int bit = n & 1;
        if (bit == 0)
        {
            n = n >> 1;
            count++;
        }
        else
        {
            return count;
        }
    }
}

int main()
{
    return 0;
}