#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {

        int start = 1;
        int end = num;

        long long int mid = start + (end - start) / 2;

        while (start <= end)
        {
            if (mid * mid == num)
            {
                return true;
            }
            else if (mid * mid > num)
            {
                end = mid - 1;
            }
            else if (mid * mid < num)
            {
                start = mid + 1;
            }

            mid = start + (end - start) / 2;
        }

        return false;
    }
};

int main()
{
    Solution soln;
    bool ans = soln.isPerfectSquare(1);
    cout << ans << endl;
    bool ans1 = soln.isPerfectSquare(4);
    cout << ans1 << endl;
    bool ans2 = soln.isPerfectSquare(9);
    cout << ans2 << endl;
    bool ans3 = soln.isPerfectSquare(34);
    cout << ans3 << endl;
    bool ans4 = soln.isPerfectSquare(56);
    cout << ans4 << endl;
    bool ans5 = soln.isPerfectSquare(49);
    cout << ans5 << endl;
    bool ans6 = soln.isPerfectSquare(100);
    cout << ans6 << endl;
    bool ans7 = soln.isPerfectSquare(65);
    cout << ans7 << endl;

    return 0;
}