#include <iostream>
using namespace std;

int sumOfDigits(int val)
{
    if (val < 0)
    {
        return -1;
    }
    if (val < 9 && val >= 0)
    {
        return val;
    }

    int sum = 0;

    while (val)
    {
        int digit = val % 10;
        sum += digit;
        val = val / 10;
    }

    if (sum >= 10)
    {
        int newSum = sumOfDigits(sum);
        return newSum;
    }

    return sum;
}

int main()
{
    cout << "Enter a value " << endl;
    int val;
    cin >> val;

    int ans = sumOfDigits(val);
    cout << "Sum of the digits in value is: " << ans << endl;

    return 0;
}