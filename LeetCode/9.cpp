#include <bits/stdtr1c++.h>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    vector<int> number;

    while (x)
    {
        int lastDigit = x % 10;
        number.push_back(lastDigit);
        x = x / 10;
    }

    int i = 0, j = number.size() - 1;

    while (i <= j)
    {
        if (number[i] != number[j])
        {
            return false;
        }
        i++, j--;
    }

    return true;
}

int main()
{
    return 0;
}