#include <bits/stdc++.h>
using namespace std;

string negDecToBin(int num)
{
    string str = "";
    for (int i = 0; i < 32; i++)
    {
        int bit = num & 1;
        

    }
}

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    string ans1 = negDecToBin(abs(n));
    cout << "Binary representation of n in computers memory is : " << ans1 << endl;
    return 0;
}