#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

bool detectLoop(Node *head)
{
    // your code here
    if (head->next == NULL)
    {
        return false;
    }
    if (head->next == head)
    {
        return true;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && slow != fast)
    {
        slow = slow->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
            if (fast->next != NULL)
            {
                fast = fast->next;
            }
        }
    }

    if (fast->next == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    return 0;
}