#include <iostream>
using namespace std;

// Constraints
//  1 <= n <= 10^5
int subtractProductAndSum(int n)
{
    int sum = 0, prod = 1;
    while (n)
    {
        int digit = n % 10;
        sum += digit;
        prod *= digit;
        n = n / 10;
    }

    return (prod - sum);
}

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    int ans = subtractProductAndSum(n);
    cout << "The answer is : " << ans << endl;

    return 0;
}