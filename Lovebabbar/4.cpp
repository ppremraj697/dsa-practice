// PATTERNS QUESTIONS
#include <iostream>
using namespace std;

void pattern1(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    int i = 1;
    int val = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << val;
            j++;
            val++;
        }
        cout << endl;
        i++;
    }
}

void pattern6(int n)
{
    int i = 1;
    while (i <= n)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        i++;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    int i = 1;
    int val = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << val;
            val++;
            j++;
        }
        i++;
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (i + j - 1);
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (i - j + 1);
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern14(int n)
{
    int i = 1;
    while (i <= n)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;
        }
        cout << endl;
        i++;
    }
}

void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + i - 1;
            cout << ch;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i + 1); j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = (n - i + 1); j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = (n - i + 1); k >= 1; k--)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern23(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i); j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern24(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int val = i;
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        for (int k = n; k >= i; k--)
        {
            cout << val;
            val++;
        }
        cout << endl;
    }
}

void pattern25(int n)
{
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i); j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << val;
            val++;
        }
        cout << endl;
    }
}
void pattern26(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i); j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int p = (i - 1); p >= 1; p--)
        {
            cout << p;
        }
        cout << endl;
    }
}
void dabbang(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int val = 1;
        for (int j = n; j >= i; j--)
        {
            cout << val;
            val++;
        }
        for (int k = 1; k < i; k++)
        {
            cout << "**";
        }
        for (int p = (n - i + 1); p >= 1; p--)
        {

            cout << --val;
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter the value of number of rows : ";
    cin >> rows;

    // pattern1(rows);
    // pattern2(rows);
    // pattern3(rows);
    // pattern4(rows);
    // pattern5(rows);
    // pattern6(rows);
    // pattern7(rows);
    // pattern8(rows);
    // pattern9(rows);
    // pattern10(rows);
    // pattern11(rows);
    // pattern12(rows);
    // pattern13(rows);
    // pattern14(rows);
    // pattern15(rows);
    // pattern16(rows);
    // pattern17(rows);
    // pattern18(rows);
    // pattern19(rows);
    // pattern20(rows);
    // pattern21(rows);
    // pattern22(rows);
    // pattern23(rows);
    // pattern24(rows);
    // pattern25(rows);
    // pattern26(rows);
    dabbang(rows);

    return 0;
}