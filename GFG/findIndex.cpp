#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findIndex(int arr[], int n, int key)
{
    vector<int> ans;
    ans.push_back(-1);
    ans.push_back(-1);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            ans[0] = i;
            break;
        }
    }

    for (int j = n - 1; j >= 0; j--)
    {
        if (arr[j] == key)
        {
            ans[1] = j;
            break;
        }
    }

    return ans;
}

int main()
{
    return 0;
}