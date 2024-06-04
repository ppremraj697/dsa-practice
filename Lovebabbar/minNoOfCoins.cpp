#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<int, int> minNoOfCoins(int amount)
{
    pair<int, int> ans;
    ans.first = -1;
    ans.second = -1;

    int coins5;
    int coins2;

    if (amount == 1 || amount == 3 || amount < 0)
    {
        return ans;
    }

    coins5 = amount / 5;
    int remainingAmount = amount % 5;

    if (remainingAmount % 2 == 0)
    {
        coins2 = remainingAmount / 2;
    }
    else
    {
        remainingAmount += 5;
        coins5 -= 1;
        coins2 = remainingAmount / 2;
    }

    ans.first = coins2;
    ans.second = coins5;

    return ans;
}

int main()
{
    cout << "Enter the amount of money" << endl;

    int amount;
    cin >> amount;

    pair<int, int> ans = minNoOfCoins(amount);
    cout << "No of coins of 5 are: " << ans.second << " and No of coins of 2 are: " << ans.first << endl;

    return 0;
}