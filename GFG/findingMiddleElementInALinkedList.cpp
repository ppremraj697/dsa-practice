#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution
{
public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        if (head->next == NULL)
        {
            return head->data;
        }
        else if (head->next->next == NULL)
        {
            return head->next->data;
        }

        Node *slow = head;
        Node *fast = head->next;

        while (fast != NULL)
        {
            // moving fast pointer 2 steps in each iteration
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }

            // moving slow pointer 1 step in each iteration
            slow = slow->next;
        }

        return slow->data;
    }
};

int main()
{
    return 0;
}