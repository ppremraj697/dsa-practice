#include <iostream>
using namespace std;

int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n)
    {
        bool isTrue = n & 1;
        if (isTrue)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    unsigned num;
    cout << "Enter the value of num : " << endl;
    cin >> num;

    int ans = hammingWeight(num);
    cout << "The answer is : " << ans << endl;

    return 0;
}