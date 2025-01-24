#include <bits/stdtr1c++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int buy = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        int currProfit = prices[i] - buy;
        maxProfit = max(maxProfit, currProfit);
        buy = min(buy, prices[i]);
    }

    return maxProfit;
}

int main()
{
    return 0;
}