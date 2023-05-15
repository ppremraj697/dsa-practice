#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n)
{
    pair<long long, long long> p;
    long long maxNo = INT_MIN;
    long long minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxNo)
        {
            maxNo = a[i];
        }
        if (a[i] < minNo)
        {
            minNo = a[i];
        }
    }

    p.first = minNo;
    p.second = maxNo;

    return p;
}

int main()
{
    long long a[] = {3, 2, 1, 56, 10000, 167};
    pair<long long, long long> ans = getMinMax(a, 6);

    cout << "Minimum element of the array is " << ans.first << endl;
    cout << "Maximum element of the array is " << ans.second << endl;

    return 0;
}