#include <bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;

public:
    MyStack() { top = -1; }
    int pop();
    void push(int);
};

// Function to insert an item at the top of the stack.
void MyStack ::push(int x)
{
    // Your Code
    if (1000 - top > 1)
    {
        top++;
        arr[top] = x;
    }
}

// Function to remove an item from top of the stack.
int MyStack ::pop()
{
    // Your Code
    if (top != -1)
    {
        int popped = arr[top];
        top--;
        return popped;
    }
}

int main()
{
    return 0;
}